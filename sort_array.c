/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:22:26 by jhii              #+#    #+#             */
/*   Updated: 2022/01/29 14:38:28 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_array(t_array *array)
{
	if (array->size_a == 3)
		sortfor3(array);
	else if (array->size_a == 5)
		sortfor5(array);
	else
		insertion_sort(array);
	return ;
}
