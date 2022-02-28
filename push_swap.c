/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:51:03 by jhii              #+#    #+#             */
/*   Updated: 2022/02/26 18:42:40 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	checkempty(int argc, char **argv)
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

/* check for leaks = system("leaks push_swap"); */
int	main(int argc, char **argv)
{
	t_array	*array;

	if (argc == 1)
		return (0);
	checkempty(argc, argv);
	array = ft_calloc(1, sizeof(t_array));
	array->size_a = create_array(array, argc, argv);
	array->size_b = 0;
	array->threshold = 0;
	convert_numbers(array);
	if (check_sorted(array))
	{
		free(array->stack_a);
		free(array->stack_b);
		free(array);
		return (0);
	}
	sort_array(array);
	free(array->stack_a);
	free(array->stack_b);
	free(array);
	return (0);
}
