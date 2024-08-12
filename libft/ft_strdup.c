/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:49:16 by dcompreh          #+#    #+#             */
/*   Updated: 2021/10/21 16:23:29 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	int			i;
	int			k;

	k = 0;
	i = ft_strlen((char *)s1);
	str = (char *)malloc(i + 1);
	if (NULL == str)
		return (NULL);
	i = 0;
	while (s1[k] != '\0')
	{
		str[i] = s1[k];
		k++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
