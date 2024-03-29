/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:56:02 by jhii              #+#    #+#             */
/*   Updated: 2022/02/25 21:54:29 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	replace_num_a(t_array *array, int *temp, int type)
{
	int	i;

	i = 0;
	if (type == 1)
	{
		while (i < array->size_a)
		{
			temp[i + 1] = array->stack_a[i];
			i++;
		}
	}
	else
	{
		while (i < array->size_a)
		{
			array->stack_a[i] = temp[i];
			i++;
		}
	}
}

static	void	replace_num_b(t_array *array, int *temp, int type)
{
	int	i;

	i = 0;
	if (type == 1)
	{
		while (i < array->size_b)
		{
			temp[i + 1] = array->stack_b[i];
			i++;
		}
	}
	else
	{
		while (i < array->size_b)
		{
			array->stack_b[i] = temp[i];
			i++;
		}
	}
}

static	void	push_a(t_array *array)
{
	int	i;
	int	*temp;

	i = 1;
	temp = ft_calloc(array->size_a + 1, sizeof(int));
	temp[0] = array->stack_b[0];
	while (i < array->size_b)
	{
		array->stack_b[i - 1] = array->stack_b[i];
		array->stack_b[i++] = 0;
	}
	array->size_b = array->size_b - 1;
	replace_num_a(array, temp, 1);
	array->size_a = array->size_a + 1;
	replace_num_a(array, temp, 2);
	free(temp);
}

static	void	push_b(t_array *array)
{
	int	i;
	int	*temp;

	i = 1;
	temp = ft_calloc(array->size_b + 1, sizeof(int));
	temp[0] = array->stack_a[0];
	while (i < array->size_a)
	{
		array->stack_a[i - 1] = array->stack_a[i];
		array->stack_a[i++] = 0;
	}
	array->size_a = array->size_a - 1;
	replace_num_b(array, temp, 1);
	array->size_b = array->size_b + 1;
	replace_num_b(array, temp, 2);
	free(temp);
}

// pa = 1, pb = 2;
void	push_top(t_array *array, int type)
{
	if (type == 1)
		push_a(array);
	if (type == 2)
		push_b(array);
	if (type == 1)
		ft_putstr_fd("pa\n", 1);
	if (type == 2)
		ft_putstr_fd("pb\n", 1);
	return ;
}
