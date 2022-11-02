/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfor3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:00:23 by jhii              #+#    #+#             */
/*   Updated: 2022/01/26 21:01:48 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfor3(t_array *array)
{
	int	a;
	int	b;
	int	c;

	a = array->stack_a[0];
	b = array->stack_a[1];
	c = array->stack_a[2];
	if (a > b && a < c)
		swap_top(array, 1);
	else if (a < b && a > c)
		rotate_down(array, 1);
	else if (a > b && a > c && b < c)
		rotate_up(array, 1);
	else if (a > b && a > c && b > c)
	{
		swap_top(array, 1);
		rotate_down(array, 1);
	}
	else if (a < b && a < c && b > c)
	{
		swap_top(array, 1);
		rotate_up(array, 1);
	}
}
