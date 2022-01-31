/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:51:18 by jhii              #+#    #+#             */
/*   Updated: 2022/01/28 19:32:07 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa = 1, sb = 2, ss = 3
void	swap_top(t_array *array, int type)
{
	int	temp;

	if (type == 1 || type == 3)
	{
		if (array->size_a <= 1)
			return ;
		temp = array->stack_a[0];
		array->stack_a[0] = array->stack_a[1];
		array->stack_a[1] = temp;
	}
	if (type == 2 || type == 3)
	{
		if (array->size_b <= 1)
			return ;
		temp = array->stack_b[0];
		array->stack_b[0] = array->stack_b[1];
		array->stack_b[1] = temp;
	}
	if (type == 1)
		ft_putstr_fd("sa\n", 1);
	if (type == 2)
		ft_putstr_fd("sb\n", 1);
	if (type == 3)
		ft_putstr_fd("ss\n", 1);
	return ;
}
