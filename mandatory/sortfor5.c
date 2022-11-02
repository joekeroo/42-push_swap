/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfor5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:00:45 by jhii              #+#    #+#             */
/*   Updated: 2022/02/22 16:25:04 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	find_after(t_array *array, int size)
{
	int	i;
	int	temp;
	int	updated;

	i = 0;
	temp = 0;
	updated = 0;
	while (i < size)
	{
		if (array->stack_a[i] > array->stack_b[0])
		{
			if (updated == 0)
			{
				temp = i;
				updated = 1;
			}
			else if (array->stack_a[i] < array->stack_a[temp])
				temp = i;
		}
		i++;
	}
	if (updated == 0)
		return (-1);
	else
		return (temp);
}

static	void	push_back(t_array *array, int size)
{
	int	i;

	i = find_after(array, size);
	if (i > -1)
	{
		if (i == 1)
			rotate_up(array, 1);
		else if ((i == 2 && size == 3) || i == 3)
			rotate_down(array, 1);
		else if (i == 2 && size == 4)
		{
			rotate_up(array, 1);
			rotate_up(array, 1);
		}
		push_top(array, 1);
	}
	else
	{
		sortasc(array);
		push_top(array, 1);
		rotate_up(array, 1);
	}
}

void	sortfor5(t_array *array)
{
	push_top(array, 2);
	push_top(array, 2);
	sortfor3(array);
	push_back(array, 3);
	push_back(array, 4);
	sortasc(array);
}
