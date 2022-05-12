/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 01:59:51 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/05/12 04:55:38 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		digit;
	long	number;
	int		exp;

	exp = 1;
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	number = n;
	while (n > 0)
	{
		n = n / 10;
		exp = exp * 10;
	}
	while (exp > 1)
	{
		exp = exp / 10;
		digit = number / exp;
		number = number - digit * exp;
		ft_putchar_fd(digit + '0', fd);
	}
}
