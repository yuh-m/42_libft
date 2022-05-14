/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:26:23 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/14 16:57:45 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_count_word(const char *s, char c)
{
	size_t	i;
	size_t	cnt_word;

	i = 0;
	cnt_word = 0;
	while (s[i])
	{
		if (s[i] != c)
			cnt_word++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (cnt_word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**result;

	i = 0;
	k = 0;
	result = (char **)malloc(sizeof(char *) * (str_count_word(s, c) + 1));
	if (!s || !result)
		return (NULL);
	while (i < str_count_word (s, c))
	{
		result[i] = (char *)malloc(sizeof(char) * (ft_strlen(&s[k] + 1)));
		if (!result[i])
			return (NULL);
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] != c && s[k])
			result[i][j++] = s[k++];
		result[i][j] = '\0';
		i++;
	}
	result[i] = '\0';
	return (result);
}
