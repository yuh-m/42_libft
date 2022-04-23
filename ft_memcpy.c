/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:44:30 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/04/22 23:37:44 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *string);

void	*ft_memcpy(void *dest, const void *restrict src, size_t n)
{
	size_t	cnt;
	size_t	src_len;
	unsigned char	*destiny;

	cnt = 0;

	destiny = dest;
	src_len = ft_strlen(src);

	while (cnt < n || cnt < src_len)
	{
		destiny[cnt] = ((unsigned char *) src)[cnt];
		cnt++;
		printf("cnt : %ld || n:%ld || src_len: %ld\n",cnt, n, src_len);
	}
	return (dest);
}
