/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:51:22 by jhii              #+#    #+#             */
/*   Updated: 2022/01/29 15:55:28 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_array
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
}	t_array;

void	swap_top(t_array *array, int type);
void	rotate_up(t_array *array, int type);
void	push_top(t_array *array, int type);
void	rotate_down(t_array *array, int type);
void	sort_array(t_array *array);
void	sortfor3(t_array *array);
void	sortfor5(t_array *array);
void	insertion_sort(t_array *array);
void	print_array(t_array *array, int type);
void	rotate_multi(t_array *array, int amount, int type);
int		create_array(t_array *array, int argc, char **argv);
int		getminmax(int *array, int size, int type);
int		check_number(char *str);
int		check_mulnumber(char *str);

#endif
