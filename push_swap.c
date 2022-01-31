/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:51:03 by jhii              #+#    #+#             */
/*   Updated: 2022/01/29 16:27:43 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	check_sorted(t_array *array)
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
	i--;
	if (res == 1)
		printf("Sorted: Yes (total: %i)\n", i + 1);
	else
		printf("Sorted: No (num: %i, index: %i)\n", array->stack_a[i], i);
}

// check for leaks = system("leaks push_swap");
int	main(int argc, char **argv)
{
	t_array	*array;

	if (argc == 1)
		return (0);
	array = ft_calloc(1, sizeof(t_array));
	array->size_a = create_array(array, argc, argv);
	array->size_b = 0;
	sort_array(array);
	print_array(array, 1);
	check_sorted(array);
	return (0);
}
