/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:50:53 by dcompreh          #+#    #+#             */
/*   Updated: 2021/10/14 19:12:32 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*s1;
	const char		*s2;
	unsigned int	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	s1 = (char *)dest;
	s2 = (const char *)src;
	if (src < dest)
	{
		while (++i <= n)
		{
			s1[n - i] = s2[n - i];
		}
	}
	else
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	return (dest);
}
