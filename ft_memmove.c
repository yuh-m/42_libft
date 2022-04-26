/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:09:04 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/04/25 20:44:35 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (((size_t)dest > (size_t)src) && ((size_t)dest - (size_t)src < n))
	{
		i =  1;
		while (n >= i)
		{
			((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
			i++;
		}
	}
	else if ((src > dest) || ((size_t)src - (size_t)dest < n))
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
