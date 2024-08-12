/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:21:43 by dcompreh          #+#    #+#             */
/*   Updated: 2021/11/14 18:46:01 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	g;
	size_t	k;

	i = 0;
	g = ft_strlen(dst);
	j = ft_strlen(src);
	k = g;
	if (g >= dstsize)
		return (dstsize + j);
	while (i < j && g < (dstsize - 1))
	{
		dst[g] = src[i];
		g++;
		i++;
	}
	dst[g] = '\0';
	return (j + k);
}
