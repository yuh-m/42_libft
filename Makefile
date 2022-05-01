# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 00:10:26 by eryudi-m          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2022/05/01 13:21:24 by eryudi-m         ###   ########.fr        #
=======
#    Updated: 2022/04/23 00:20:37 by eryudi-m         ###   ########.fr        #
>>>>>>> 169b19237acd937671d38ed2cfafeb2a9c32c958
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
<<<<<<< HEAD
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c
=======
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c
>>>>>>> 169b19237acd937671d38ed2cfafeb2a9c32c958

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = gcc $(FLAGS) -c

all: $(NAME)
$(NAME): $(OBJ)
	ar rc libft.a $(OBJ)

clean:
	@/bin/rm -f $(OBJ)
# rm as well for bonuses variable $(BONUS_OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
