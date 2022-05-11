/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 00:19:33 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/11 03:41:53 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	cnt = 0;
	while (cnt < n && cnt <= len_s1 && cnt <= len_s2)
	{
		if (s1[cnt] == s2[cnt])
			cnt++;
		else
			return (s1[cnt] - s2[cnt]);
	}
/*
	if (len_s1 > len_s2)
	{
		while (cnt < n && cnt <= len_s1)
		{
			if (s1[cnt] == s2[cnt])
				cnt++;
			else
				return (s1[cnt] - s2[cnt]);
		}
	}
	else
	{
		while (cnt < n && cnt <= len_s2)
		{
			if (s1[cnt] == s2[cnt])
				cnt++;
			else
				return (s1[cnt] - s2[cnt]);
		}
	}
*/
	return (0);
}
