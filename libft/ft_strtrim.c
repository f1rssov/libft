/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:54:43 by dcompreh          #+#    #+#             */
/*   Updated: 2021/11/15 19:19:36 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_in_str(char s, const char	*ch)
{
	int	i;

	i = 0;
	while (ch[i])
	{
		if (ch[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		start;
	size_t		end;
	int			i;

	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] && ft_char_in_str(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while ((end > start) && ft_char_in_str(s1[end - 1], set))
		end--;
	str = malloc((end - start) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
