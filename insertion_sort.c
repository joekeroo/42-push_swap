/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:38:13 by jhii              #+#    #+#             */
/*   Updated: 2022/01/29 15:54:59 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort(t_array *array)
{
	int	i;
	int	min;
	int	size;

	i = 0;
	size = array->size_a;
	while (i < size)
	{
		min = getminmax(array->stack_a, array->size_a, 1);
		if (min < array->size_a / 2)
			rotate_multi(array, min, 1);
		else if (min >= array->size_a / 2)
			rotate_multi(array, array->size_a - min, 2);
		push_top(array, 2);
		i++;
	}
	i = 0;
	size = array->size_b;
	while (i < size)
	{
		push_top(array, 1);
		i++;
	}
}
