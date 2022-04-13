# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 00:10:26 by eryudi-m          #+#    #+#              #
#    Updated: 2022/04/12 23:56:31 by eryudi-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = cc $(FLAGS) -c

all: $(NAME)
$(NAME): $(OBJ)
	ar rc libft.a $(OBJ)

clean:
	@/bin/rm -f $(OBJ)
# rm as well for bonuses variable $(BONUS_OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
