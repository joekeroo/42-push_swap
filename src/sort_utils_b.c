/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:53:32 by jhii              #+#    #+#             */
/*   Updated: 2022/02/26 14:18:19 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	countmoves(int i, int j)
{
	if (i < j)
		return (i);
	else if (j < i)
		return (j);
	else
		return (i);
}

int	find_asc(t_array *array)
{
	int	min;

	min = getminmax(array->stack_a, array->size_a, 1);
	if (min <= array->size_a / 2)
		return (min);
	else
		return (array->size_a - min);
}

void	sortasc(t_array *array)
{
	int	min;

	min = getminmax(array->stack_a, array->size_a, 1);
	if (min < array->size_a / 2)
		rotate_multi(array, min, 1);
	else if (min >= array->size_a / 2)
		rotate_multi(array, array->size_a - min, 2);
}

void	rotate_over(t_array *array, int hold_a, int hold_b)
{
	if (hold_a == hold_b)
	{
		if (hold_a <= array->size_a / 2)
			rotate_multi(array, hold_a, 1);
		else
			rotate_multi(array, array->size_a - hold_a, 2);
	}
	else
	{
		if (hold_a <= array->size_a - hold_b)
			rotate_multi(array, hold_a, 1);
		else
			rotate_multi(array, array->size_a - hold_b, 2);
	}
}

/* 1 = threshold increase success, 0 = threshold increase failed */
int	get_threshold(t_array *array)
{
	int	len;

	len = array->chunk_size;
	if (array->threshold == 0)
	{
		array->lower_threshold = array->min_num;
		array->upper_threshold = array->lower_threshold + len;
		if (array->chunk_remainder > 0)
			array->upper_threshold = array->lower_threshold + len + 1;
		array->chunk_remainder = array->chunk_remainder - 1;
	}
	else if (array->threshold < array->total_chunk)
	{
		array->lower_threshold = array->upper_threshold + 1;
		array->upper_threshold = array->lower_threshold + len;
		if (array->chunk_remainder > 0)
			array->upper_threshold = array->lower_threshold + len + 1;
		array->chunk_remainder = array->chunk_remainder - 1;
	}
	else
		return (0);
	array->threshold = array->threshold + 1;
	return (1);
}
