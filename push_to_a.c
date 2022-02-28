/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:59:32 by jhii              #+#    #+#             */
/*   Updated: 2022/02/24 21:54:17 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	checkrotate(t_array *array, int index)
{
	int	min;
	int	diff;
	int	get_a;

	diff = array->size_b - index;
	get_a = getindex_a(array, index);
	min = getminmax(array->stack_a, array->size_a, 1);
	if (index == 0)
		return (0);
	else if (index <= array->size_b / 2)
	{
		if (get_a <= array->size_a / 2)
			if (get_a > -1)
				return (countmoves(index, get_a));
		if (find_asc(array) == min && get_a < 0)
			return (countmoves(index, min));
	}
	else if (index > array->size_b / 2)
	{
		if (get_a > array->size_a / 2)
			return (countmoves(diff, array->size_a - get_a));
		if (find_asc(array) == array->size_a - min && get_a < 0)
			return (countmoves(diff, array->size_a - min));
	}
	return (0);
}

/* moves_a = getmoves(array, i, 2), moves_b = getmoves(array, i, 1) */
static	void	checksmartrotate(t_array *array)
{
	int	i;
	int	total;

	i = 0;
	while (i < array->size_b)
	{
		total = getmoves(array, i, 2) + getmoves(array, i, 1) + 1;
		if (checkrotate(array, i))
			total = total - checkrotate(array, i);
		if (array->best_index < 0 || total < array->total_moves)
		{
			array->best_index = i;
			array->total_moves = total;
		}
		else if (total == array->total_moves)
		{
			if (array->stack_b[array->best_index] < array->stack_b[i])
			{
				array->best_index = i;
				array->total_moves = total;
			}
		}
		i++;
	}
}

/* 1 = rb rrb, 2 = ra rra */
static	void	rotate_remainder(t_array *array, int a, int b, int type)
{
	if (type == 1)
	{
		if (a <= array->size_b / 2)
			rotate_multi_b(array, a, 1);
		else if (b > array->size_b / 2)
			rotate_multi_b(array, array->size_b - b, 2);
	}
	else
	{
		if (a <= array->size_a / 2)
			rotate_multi(array, a, 1);
		else if (b > array->size_a / 2)
			rotate_multi(array, array->size_a - b, 2);
	}
}

static	void	smartrotate(t_array *array)
{
	int	ra;
	int	rb;
	int	rra;
	int	rrb;

	array->rt_both = checkrotate(array, array->best_index);
	rb = array->best_index;
	rrb = array->best_index;
	ra = getindex_a(array, array->best_index);
	rra = getindex_a(array, array->best_index);
	if (checkrotate(array, array->best_index))
	{
		if (array->best_index <= array->size_b / 2)
			addmoves(array, &ra, &rb, 1);
		else
			addmoves(array, &rra, &rrb, 2);
	}
	if (ra < 0)
		sortasc(array);
	rotate_remainder(array, rb, rrb, 1);
	rotate_remainder(array, ra, rra, 2);
}

void	push_to_a(t_array *array)
{
	int	i;
	int	size;

	i = 2;
	size = array->size_b;
	push_top(array, 1);
	push_top(array, 1);
	while (i < size)
	{
		array->best_index = -1;
		array->total_moves = -1;
		checksmartrotate(array);
		smartrotate(array);
		push_top(array, 1);
		i++;
	}
	sortasc(array);
}
