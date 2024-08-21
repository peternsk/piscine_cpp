# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/21 09:47:57 by pnsaka            #+#    #+#              #
#    Updated: 2024/08/21 09:47:59 by pnsaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Zombie

CC		= c++

FLAG	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= $(shell find . -iname "*.cpp")

OBJ		= $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
		$(CC) $(FLAG) $(OBJ) -o $(NAME)

all :	$(NAME)

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY:		all clean fclean re