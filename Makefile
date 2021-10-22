# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 12:35:51 by lbrazale          #+#    #+#              #
#    Updated: 2021/10/21 00:03:37 by lbrazale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_printf.c	\
		print_cs.c		\
		print_diu.c		\
		print_pxX.c		\
		ft_putnbr_base.c	\
		

OBJ = $(SRC:.c=.o)

AR = ar rcs

RM = rm -f

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

$(NAME): $(OBJ) $(SEARCH)
		$(AR) $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY = all clean fclean re
