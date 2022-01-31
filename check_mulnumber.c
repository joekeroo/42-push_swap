/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mulnumber.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:25:18 by jhii              #+#    #+#             */
/*   Updated: 2022/01/22 16:14:37 by jhii             ###   ########.fr       */
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

// 1 = valid unsorted number, 0 = invalid unsorted number
static	int	isnumber(char *nbr)
{
	int		i;
	int		j;
	int		pass;
	char	*str;

	i = 0;
	str = "0123456789- ";
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

// 1 = valid number, 0 = invalid number
static	int	isvalidnumber(char *str)
{
	int	i;

	i = 0;
	if (isnumber(str) == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			if (ft_isdigit(str[i + 1]))
			{
				if (i == 0)
					i++;
				else if (str[i - 1] == ' ')
					i++;
				else
					return (0);
			}
			else
				return (0);
		}
		else
			i++;
	}
	return (1);
}

// 1 = total amount of valid intiger, 0 = invalid intiger
int	check_mulnumber(char *str)
{
	int		i;
	int		len;
	char	**result;

	if (isvalidnumber(str) == 0)
		return (0);
	i = 0;
	len = 0;
	result = ft_split(str, ' ');
	while (result[i])
	{
		if (check_minmax(result[i]) == 0)
		{
			free(result);
			return (0);
		}
		len++;
		i++;
	}
	return (len);
}
