/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:57:49 by eryudi-m          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/01 13:21:22 by eryudi-m         ###   ########.fr       */
=======
/*   Updated: 2022/04/23 00:20:12 by eryudi-m         ###   ########.fr       */
>>>>>>> 169b19237acd937671d38ed2cfafeb2a9c32c958
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

size_t	ft_strlen(const char *string);

<<<<<<< HEAD
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);

int		ft_toupper(int c);
int		ft_tolower(int c);
=======
void *ft_memset(void *s, int c, size_t n);
void *ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
>>>>>>> 169b19237acd937671d38ed2cfafeb2a9c32c958

#endif
