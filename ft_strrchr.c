/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 20:35:37 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/04 00:12:27 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	ft_strlen(const char *string);

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_src;
	size_t	cnt;
	char*	i;

	len_src = ft_strlen(s);
	i = (char *)s + len_src;
	cnt = 0;

	//printf("\n\nInitial value: %s \n", i	);
	if (c == '\0')
		return ((char *)s + len_src);
	//while (i >= s)
	while (s + len_src >= s)
	{
		if (s[len_src] == c)
			return (i - cnt);
		len_src--;
		cnt++;
	}
	return (NULL);
}
