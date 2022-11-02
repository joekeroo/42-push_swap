/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:47:30 by jhii              #+#    #+#             */
/*   Updated: 2022/01/22 17:21:58 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 1 = whithin max and min intiger, 0 = not whithin max and min intiger
static	int	check_minmax(char *str)
{
	long	result;
	long	negative;

	result = 0;
	negative = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
		if (result * negative > 2147483647 || result * negative < -2147483648)
			return (0);
	}
	return (1);
}

// 1 = valid number, 0 = invalid number
static	int	isvalidnumber(char *nbr)
{
	int		i;
	int		j;
	int		pass;
	char	*str;

	i = 0;
	str = "0123456789";
	if (nbr[0] == '-')
		i++;
	while (nbr[i] != '\0')
	{
		j = 0;
		pass = 0;
		while (str[j] != '\0')
		{
			if (nbr[i] == str[j])
				pass++;
			j++;
		}
		if (pass)
			i++;
		else
			return (0);
	}
	return (1);
}

// 1 = valid intiger, 0 = invalid intiger
int	check_number(char *str)
{
	if (ft_strlen(str) == 1 && str[0] == '-')
		return (0);
	if (isvalidnumber(str))
		if (check_minmax(str))
			return (1);
	return (0);
}
