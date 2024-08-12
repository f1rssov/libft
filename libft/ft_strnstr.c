/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:32:18 by dcompreh          #+#    #+#             */
/*   Updated: 2021/10/27 21:19:38 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nd_l;

	i = 0;
	nd_l = ft_strlen(needle);
	if (!ft_strncmp(haystack, needle, nd_l))
		return ((char *) haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j]
				&& (i + j) < len)
				j++;
		}
		if (j == nd_l)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
