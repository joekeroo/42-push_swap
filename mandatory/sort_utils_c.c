/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:50:51 by jhii              #+#    #+#             */
/*   Updated: 2022/11/02 15:13:37 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	getindex_a(t_array *array, int index)
{
	int	i;
	int	temp;
	int	size;

	i = 0;
	temp = -1;
	size = array->size_a;
	while (i < size)
	{
		if (array->stack_a[i] > array->stack_b[index])
		{
			if (temp == -1)
				temp = i;
			else if (array->stack_a[temp] > array->stack_a[i])
				temp = i;
		}
		i++;
	}
	if (temp == -1)
		return (-1);
	else
		return (temp);
}

int	getmoves(t_array *array, int index, int type)
{
	int	i;
	int	size;
	int	moves_a;
	int	moves_b;

	i = 0;
	size = array->size_a;
	if (index <= array->size_b / 2)
		moves_b = index;
	else
		moves_b = array->size_b - index;
	if (getindex_a(array, index) < 0)
		moves_a = find_asc(array);
	else if (getindex_a(array, index) <= array->size_a / 2)
		moves_a = getindex_a(array, index);
	else
		moves_a = array->size_a - getindex_a(array, index);
	if (type == 1)
		return (moves_b);
	else
		return (moves_a);
}

void	addmoves(t_array *array, int *a, int *b, int type)
{
	if (type == 1)
	{
		rotate_both(array, array->rt_both, 1);
		*a = *a - array->rt_both;
		*b = *b - array->rt_both;
	}
	else
	{
		rotate_both(array, array->rt_both, 2);
		*a = *a + array->rt_both;
		*b = *b + array->rt_both;
	}
}

int	check_sorted(t_array *array)
{
	int	i;
	int	res;
	int	size;

	i = 0;
	res = 1;
	size = array->size_a;
	while (i < size)
	{
		if (i > 0 && array->stack_a[i] < array->stack_a[i - 1])
		{
			res = 0;
			break ;
		}
		i++;
	}
	if (res == 1 && array->size_b == 0)
		return (1);
	else
		return (0);
}

void	checkempty(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i++][0] == '\0')
		{
			ft_putstr_fd("Error\n", 1);
			exit(1);
		}
	}
}
