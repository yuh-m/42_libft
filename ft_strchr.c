/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 20:35:37 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/03 21:03:31 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *string);

char	*ft_strchr(const char *s, int c)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + len_src);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}
