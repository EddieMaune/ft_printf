# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emaune <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/30 08:12:27 by emaune            #+#    #+#              #
#    Updated: 2018/09/24 13:05:03 by emaune           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC	= ft_printf.c ft_char_to_str.c ft_putwcharstr.c ft_itoa_base.c\
	  print_output.c ft_putlongnbr.c\
	  ft_strdup.c ft_strjoin.c\
	  ft_strdel.c ft_putchar.c ft_putwcharstr.c\
	  ft_strlen.c ft_strtoupper.c ft_itoa.c
	  
OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):
	$(MAKE) -s libft
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:		fclean
	@make
	@make clean
