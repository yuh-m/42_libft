/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:11:20 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/11 03:37:20 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	size_t		st;
	size_t		cnt;
	char		*substr;

	s_len = ft_strlen(s);
	st = start;
	if (st > s_len)
		return (NULL);
	if ((s_len - st) < len)
		len = s_len - st;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	cnt = 0;
	while (cnt < len)
		substr[cnt++] = s[st++];
	return (substr);
}
