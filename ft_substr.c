/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 00:11:20 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/10 00:21:17 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*result;

	s_len = ft_strlen(s);
	if (start > s_len)
		return (ftstrdup(""));
	if ((s_len - start) < len)
		len = s_len - start;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, start, len + 1);
	return (result);
}
