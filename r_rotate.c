/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:00:02 by jhii              #+#    #+#             */
/*   Updated: 2022/01/28 19:25:11 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	shift_down(int *array, int size)
{
	int	i;
	int	*temp;

	i = 1;
	temp = ft_calloc(size, sizeof(int));
	temp[0] = array[size - 1];
	while (i < size)
	{
		temp[i] = array[i - 1];
		i++;
	}
	i = 0;
	while (i < size)
	{
		array[i] = temp[i];
		i++;
	}
	return ;
}

// rra = 1, rrb = 2, rrr = 3;
void	rotate_down(t_array *array, int type)
{
	if (type == 1 || type == 3)
		shift_down(array->stack_a, array->size_a);
	if (type == 2 || type == 3)
		shift_down(array->stack_b, array->size_b);
	if (type == 1)
		ft_putstr_fd("rra\n", 1);
	if (type == 2)
		ft_putstr_fd("rrb\n", 1);
	if (type == 3)
		ft_putstr_fd("rrr\n", 1);
	return ;
}
