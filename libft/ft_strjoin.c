/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:44:06 by dcompreh          #+#    #+#             */
/*   Updated: 2021/11/15 19:19:04 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			k;
	char		*s3;

	i = 0;
	k = 0;
	if (!s1)
		return (NULL);
	s3 = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (NULL == s3)
		return (NULL);
	while (s1[k] != '\0')
	{
		s3[i] = s1[k];
		i++;
		k++;
	}
	k = -1;
	while (s2[++k] != '\0')
	{
		s3[i] = s2[k];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
