/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:44:30 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/04/23 00:09:20 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t			cnt;
	unsigned char	*destiny;

	cnt = 0;
	destiny = dest;
	while (cnt < n)
	{
		destiny[cnt] = ((unsigned char *) src)[cnt];
		cnt++;
	}
	return (dest);
}
