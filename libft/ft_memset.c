/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:35:32 by dcompreh          #+#    #+#             */
/*   Updated: 2021/10/14 18:19:48 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*buf, int ch, size_t count)
{
	int		i;
	char	*str;

	str = (char *)buf;
	i = 0;
	while (count > 0)
	{
		str[i] = ch;
		count--;
		i++;
	}
	return (str);
}
