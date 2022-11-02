/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opt_insertion_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:37:57 by jhii              #+#    #+#             */
/*   Updated: 2022/02/22 14:45:39 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// size = total number of chunks
static	void	chunk_init_a(t_array *array, int size)
{
	int		size_a;
	int		diff;

	size_a = array->size_a;
	array->min_num = array->stack_a[getminmax(array->stack_a, size_a, 1)];
	array->max_num = array->stack_a[getminmax(array->stack_a, size_a, 2)];
	array->total_chunk = size;
	diff = array->max_num - array->min_num + 1;
	array->chunk_size = diff / size;
	array->chunk_remainder = (diff % size) - 1;
	if (array->chunk_size == 0)
	{
		array->total_chunk = 1;
		array->chunk_size = array->chunk_remainder - 1;
		array->chunk_remainder = 0;
	}
}

// size = total number of chunks
static	void	chunk_init_b(t_array *array, int size)
{
	int		size_b;
	int		diff;

	size_b = array->size_b;
	array->min_num = array->stack_b[getminmax(array->stack_b, size_b, 1)];
	array->max_num = array->stack_b[getminmax(array->stack_b, size_b, 2)];
	array->total_chunk = size;
	diff = array->max_num - array->min_num + 1;
	array->chunk_size = diff / size;
	array->chunk_remainder = (diff % size) - 1;
	if (array->chunk_size == 0)
	{
		array->total_chunk = 1;
		array->chunk_size = array->chunk_remainder - 1;
		array->chunk_remainder = 0;
	}
}

// returns index of number between threshold, returns -1 if not found
static	int	get_min_in_threshold(t_array *array, int type)
{
	int	i;

	if (type == 1)
	{
		i = 0;
		while (i < array->size_a)
		{
			if (array->stack_a[i] >= array->lower_threshold)
				if (array->stack_a[i] <= array->upper_threshold)
					return (i);
			i++;
		}
	}
	else
	{
		i = array->size_a - 1;
		while (i > -1)
		{
			if (array->stack_a[i] >= array->lower_threshold)
				if (array->stack_a[i] <= array->upper_threshold)
					return (i);
			i--;
		}
	}
	return (-1);
}

// push number from stack a to b that's within the threshold
static	int	push_between_threshold(t_array *array)
{
	int	hold_a;
	int	hold_b;

	hold_a = get_min_in_threshold(array, 1);
	hold_b = get_min_in_threshold(array, 2);
	if (hold_a == -1)
		return (0);
	else
	{
		rotate_over(array, hold_a, hold_b);
		push_top(array, 2);
		return (1);
	}
}

void	opt_insertion_sort(t_array *array, int sz)
{
	int	i;
	int	size;
	int	check;
	int	temp;

	i = 0;
	size = array->size_a;
	chunk_init_a(array, sz);
	check = get_threshold(array);
	while (i < size)
	{
		temp = push_between_threshold(array);
		while (temp == 0 && check > 0)
		{
			check = get_threshold(array);
			temp = push_between_threshold(array);
		}
		i++;
	}
	chunk_init_b(array, sz);
	push_to_a(array);
}
