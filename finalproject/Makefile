# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bekim <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/12 19:40:39 by bekim             #+#    #+#              #
#    Updated: 2019/11/13 17:55:37 by bekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		=	bsq
SRC			=	src/*.c
OBJECT		=	*.o
INCLUDE		=	include
NAME		=	execute
FLAGS		=	-Wall -Wextra -Werror


$(TARGET):
	@gcc $(FLAGS) -o $(TARGET) $(SRC) -I $(INCLUDE)

all: $(TARGET)

clean:
	@/bin/rm $(TARGET)

fclean: clean

re:	fclean all

.PHONY: all clean fclean re
