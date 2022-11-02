/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:56:05 by jhii              #+#    #+#             */
/*   Updated: 2022/02/25 21:40:38 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	shift_up(int *array, int size)
{
	int	i;
	int	*temp;

	i = 1;
	temp = ft_calloc(size, sizeof(int));
	while (i < size)
	{
		temp[i - 1] = array[i];
		i++;
	}
	temp[i - 1] = array[0];
	i = 0;
	while (i < size)
	{
		array[i] = temp[i];
		i++;
	}
	free(temp);
	return ;
}

// ra = 1, rb = 2, rr = 3;
void	rotate_up(t_array *array, int type)
{
	if (type == 1 || type == 3)
		shift_up(array->stack_a, array->size_a);
	if (type == 2 || type == 3)
		shift_up(array->stack_b, array->size_b);
	if (type == 1)
		ft_putstr_fd("ra\n", 1);
	if (type == 2)
		ft_putstr_fd("rb\n", 1);
	if (type == 3)
		ft_putstr_fd("rr\n", 1);
	return ;
}
