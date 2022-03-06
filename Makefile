# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 04:22:57 by yagnaou           #+#    #+#              #
#    Updated: 2021/12/13 10:21:52 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_putchar.c\
	   ft_putstr.c\
	   ft_putnbr.c\
	   ft_putuns.c\
	   ft_puthexa.c\
	   ft_printf.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $<
	ar rc $(NAME) $@

clean :
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all
