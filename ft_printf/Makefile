# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhwaja <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 14:13:42 by rkhwaja           #+#    #+#              #
#    Updated: 2025/09/03 14:22:14 by rkhwaja          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c\
	ft_putchar.c ft_putstr.c ft_putnbr.c\
       ft_putunsigned.c ft_puthexasmall.c\
       ft_puthexacapital.c ft_putpointer.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) 
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
