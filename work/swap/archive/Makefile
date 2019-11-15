# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 16:15:03 by irenfrow          #+#    #+#              #
#    Updated: 2019/11/11 16:20:08 by irenfrow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = test
SRCS = srcs/main.c srcs/ft_swap.c
INCLUDE = include
NAME = run_all

all:	$(NAME)

$(NAME):
	@gcc -o $(TARGET) $(SRCS) -I $(INCLUDE)

clean:
	@/bin/rm $(TARGET)

fclean:
	@/bin/rm $(TARGET)

re: fclean all
