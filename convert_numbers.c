/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:54:20 by jhii              #+#    #+#             */
/*   Updated: 2022/02/25 21:14:13 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	swap_num(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static	void	selection_sort(int *array, int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}
		swap_num(&array[min], &array[i]);
		i++;
	}
}

static	int	get_index(t_array *array, int index)
{
	int	i;
	int	*temp;

	i = 0;
	temp = ft_calloc(array->size_a, sizeof(int));
	while (i < array->size_a)
	{
		temp[i] = array->stack_a[i];
		i++;
	}
	selection_sort(temp, array->size_a);
	i = 0;
	while (i < array->size_a)
	{
		if (temp[i] == array->stack_a[index])
		{
			free(temp);
			return (i + 1);
		}
		i++;
	}
	free(temp);
	return (-1);
}

void	convert_numbers(t_array *array)
{
	int	i;
	int	*temp;

	i = 0;
	temp = ft_calloc(array->size_a, sizeof(int));
	while (i < array->size_a)
	{
		temp[i] = get_index(array, i);
		i++;
	}
	i = 0;
	while (i < array->size_a)
	{
		array->stack_a[i] = temp[i];
		i++;
	}
	free(temp);
}
