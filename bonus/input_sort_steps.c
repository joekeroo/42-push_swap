/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_sort_steps.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:22:09 by jhii              #+#    #+#             */
/*   Updated: 2022/11/02 16:30:42 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_extra(t_array *array, char *temp)
{
	if (ft_strcmp(temp, "pa\n"))
		push_top(array, 1);
	else if (ft_strcmp(temp, "pb\n"))
		push_top(array, 2);
	else if (ft_strcmp(temp, "ra\n"))
		rotate_up(array, 1);
	else if (ft_strcmp(temp, "rb\n"))
		rotate_up(array, 2);
	else if (ft_strcmp(temp, "rr\n"))
		rotate_up(array, 3);
	else if (ft_strcmp(temp, "rra\n"))
		rotate_down(array, 1);
	else if (ft_strcmp(temp, "rrb\n"))
		rotate_down(array, 2);
	else if (ft_strcmp(temp, "rrr\n"))
		rotate_down(array, 3);
	else if (ft_strcmp(temp, "sa\n"))
		swap_top(array, 1);
	else if (ft_strcmp(temp, "sb\n"))
		swap_top(array, 2);
	else if (ft_strcmp(temp, "ss\n"))
		swap_top(array, 3);
	else
		return (0);
	return (1);
}

void	input_sort_steps(t_array *array)
{
	char	*temp;

	temp = get_next_line(0);
	while (temp)
	{
		if (ft_strcmp(temp, "\n"))
		{
			free(temp);
			break ;
		}
		else if (!check_extra(array, temp))
		{
			free(temp);
			break ;
		}
		free(temp);
		temp = get_next_line(0);
	}
	if (!check_sorted(array))
		ft_putstr_fd("KO\n", 1);
	else
		ft_putstr_fd("OK\n", 1);
}
