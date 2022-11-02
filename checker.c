/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:56:10 by jhii              #+#    #+#             */
/*   Updated: 2022/11/02 16:32:55 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_array	*array;

	if (argc == 1)
		return (0);
	checkempty(argc, argv);
	array = ft_calloc(1, sizeof(t_array));
	array->size_a = create_array(array, argc, argv);
	array->size_b = 0;
	convert_numbers(array);
	input_sort_steps(array);
	free(array->stack_a);
	free(array->stack_b);
	free(array);
	return (0);
}
