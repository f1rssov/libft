/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 19:43:35 by dcompreh          #+#    #+#             */
/*   Updated: 2021/11/08 19:37:00 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_cnt(char const *str, char del)
{
	int	word_cnt;
	int	i;

	i = 0;
	word_cnt = 0;
	while (str[i])
	{
		while (str[i] == del)
			i++;
		if (str[i] != del && str[i])
			word_cnt++;
		while (str[i] != del && str[i])
			i++;
	}
	return (word_cnt);
}

char	*init_str(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

void	*ft_space(char	**ptr, int i)
{
	while (i > 0)
		free(ptr[i--]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word_cnt;
	char	**ptr;

	if (!s)
		return (NULL);
	word_cnt = ft_word_cnt(s, c);
	ptr = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < word_cnt)
	{
		while (s[0] == c)
			s++;
		ptr[i] = init_str(s, c);
		if (!ptr[i])
			return (ft_space(ptr, i));
		s = s + ft_strlen(ptr[i]);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
