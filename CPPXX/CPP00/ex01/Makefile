# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 13:21:42 by peternsaka        #+#    #+#              #
#    Updated: 2024/07/24 13:37:33 by peternsaka       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PhoneBook

CC		= c++

FLAG	= -Wall -Werror -Wextra -std=c++98

RM		= rm - fr

SRC		= $(shell find . -iname "*.cpp")

OBJ		= $(SRC:.c=.o)

$(NAME) : $(OBJ)
		$(CC) $(FLAG) $(OBJ) -o $(NAME)

all :
		$(NAME)

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY:		all clean fclean re



