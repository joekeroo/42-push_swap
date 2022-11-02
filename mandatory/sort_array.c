/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:22:26 by jhii              #+#    #+#             */
/*   Updated: 2022/02/26 18:45:53 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_array(t_array *array)
{
	if (array->size_a == 2)
	{
		if (check_sorted(array) == 0)
			swap_top(array, 1);
	}
	else if (array->size_a == 3)
		sortfor3(array);
	else if (array->size_a == 5)
		sortfor5(array);
	else if (array->size_a <= 250)
		opt_insertion_sort(array, 2);
	else
		opt_insertion_sort(array, 4);
	return ;
}
