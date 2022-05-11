/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:28:20 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/11 03:39:15 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	tot_size;
	void	*dest;

	tot_size = nmemb * size;
	dest = malloc(tot_size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, tot_size);
	return (dest);
}
