/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:24:08 by dcompreh          #+#    #+#             */
/*   Updated: 2021/11/12 19:43:47 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_to_int(const char *str, int i, int neg)
{
	unsigned int	res;

	res = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - 48);
		i++;
		if (res > 2147483647 && neg == 1)
			return (-1);
		if (res > 2147483648 && neg == -1)
			return (0);
	}
	return (res * neg);
}

int	ft_atoi(const char *str)
{
	unsigned int	res;
	int				neg;
	int				i;

	neg = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' && str[i + 1] != '-')
			neg = -1;
		if (str[i] == '+' && str[i + 1] != '+')
			neg = 1;
		i++;
	}
	if (str[i] >= 48 && str[i] <= 57)
	{
		res = ft_char_to_int(str, i, neg);
		return (res);
	}
	return (0);
}
