/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 14:38:46 by jhii              #+#    #+#             */
/*   Updated: 2022/02/26 14:17:52 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* 1 = min, 2 = max (returns the index of [type] in array) */
int	getminmax(int *array, int size, int type)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (type == 1)
	{
		while (i < size)
		{
			if (i > 0 && array[i] < array[res])
				res = i;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			if (i > 0 && array[i] > array[res])
				res = i;
			i++;
		}
	}
	return (res);
}

/* 1 = rotate_up, 2 = rotate_down */
void	rotate_both(t_array *array, int amount, int type)
{
	int	i;

	i = 0;
	if (type == 1)
	{
		while (i < amount)
		{
			rotate_up(array, 3);
			i++;
		}
	}
	else
	{
		while (i < amount)
		{
			rotate_down(array, 3);
			i++;
		}
	}
}

/* 1 = rotate_up, 2 = rotate_down */
void	rotate_multi(t_array *array, int amount, int type)
{
	int	i;

	i = 0;
	if (type == 1)
	{
		while (i < amount)
		{
			rotate_up(array, 1);
			i++;
		}
	}
	else
	{
		while (i < amount)
		{
			rotate_down(array, 1);
			i++;
		}
	}
}

/* 1 = rotate_up, 2 = rotate_down */
void	rotate_multi_b(t_array *array, int amount, int type)
{
	int	i;

	i = 0;
	if (type == 1)
	{
		while (i < amount)
		{
			rotate_up(array, 2);
			i++;
		}
	}
	else
	{
		while (i < amount)
		{
			rotate_down(array, 2);
			i++;
		}
	}
}
