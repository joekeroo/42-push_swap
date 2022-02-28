/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:57:26 by jhii              #+#    #+#             */
/*   Updated: 2022/02/26 18:42:39 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

// returns Error if duplicate number is found
static	int	check_duplicate(t_array *array, int size)
{
	int	i;
	int	j;
	int	curr;

	i = 0;
	while (i < size)
	{
		j = 0;
		curr = array->stack_a[i];
		while (j < size)
		{
			if (i != j && array->stack_a[j] == curr)
			{
				ft_putstr_fd("Error\n", 1);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (size);
}

// check for basic error (invalid characters, max/min int)
static	void	check_error(int size)
{
	if (size == 0)
	{
		ft_putstr_fd("Error\n", 1);
		exit(1);
	}
}

// 0 = invalid string, +n = size of string
static	int	szlen(int argc, char **argv)
{
	int		i;
	int		size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		if (check_number(argv[i]))
			size = size + 1;
		else if (check_mulnumber(argv[i]) > 0)
			size = size + check_mulnumber(argv[i]);
		else
			return (0);
		i++;
	}
	return (size);
}

// return the size and creates an array of numbers from input
int	create_array(t_array *array, int argc, char **argv)
{
	int		i;
	int		k;
	int		j;
	char	**temp;

	i = 1;
	k = 0;
	check_error(szlen(argc, argv));
	array->stack_a = ft_calloc(szlen(argc, argv), sizeof(int));
	array->stack_b = ft_calloc(szlen(argc, argv), sizeof(int));
	while (i < argc)
	{
		if (check_mulnumber(argv[i]) > 0)
		{
			j = 0;
			temp = ft_split(argv[i], ' ');
			while (temp[j])
				array->stack_a[k++] = ft_atoi(temp[j++]);
			ft_malloc_error(temp);
			i++;
		}
		else if (check_number(argv[i]))
			array->stack_a[k++] = ft_atoi(argv[i++]);
	}
	return (check_duplicate(array, szlen(argc, argv)));
}
