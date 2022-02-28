/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:51:22 by jhii              #+#    #+#             */
/*   Updated: 2022/02/26 18:04:55 by jhii             ###   ########.fr       */
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
	int	min_num;
	int	max_num;
	int	threshold;
	int	upper_threshold;
	int	lower_threshold;
	int	total_chunk;
	int	chunk_size;
	int	chunk_remainder;
	int	total_moves;
	int	best_index;
	int	rt_both;
}	t_array;

void	swap_top(t_array *array, int type);
void	rotate_up(t_array *array, int type);
void	push_top(t_array *array, int type);
void	rotate_down(t_array *array, int type);
void	sort_array(t_array *array);
void	sortfor3(t_array *array);
void	sortfor5(t_array *array);
void	opt_insertion_sort(t_array *array, int sz);
void	rotate_multi(t_array *array, int amount, int type);
void	rotate_multi_b(t_array *array, int amount, int type);
void	rotate_both(t_array *array, int amount, int type);
void	sortasc(t_array *array);
void	push_to_a(t_array *array);
void	convert_numbers(t_array *array);
void	rotate_over(t_array *array, int hold_a, int hold_b);
void	addmoves(t_array *array, int *a, int *b, int type);
int		create_array(t_array *array, int argc, char **argv);
int		getmoves(t_array *array, int index, int type);
int		getminmax(int *array, int size, int type);
int		getindex_a(t_array *array, int index);
int		get_threshold(t_array *array);
int		countmoves(int i, int j);
int		find_asc(t_array *array);
int		check_number(char *str);
int		check_mulnumber(char *str);
int		check_sorted(t_array *array);

#endif
