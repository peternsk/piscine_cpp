# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 13:37:24 by pnsaka            #+#    #+#              #
#    Updated: 2024/09/17 10:16:20 by peternsaka       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Bureaucrate

CC		= c++

FLAG	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= $(shell find . -iname "*.cpp")

OBJ		= $(SRC:.cpp=.o)

MOD_PDF = https://cdn.intra.42.fr/pdf/pdf/95639/fr.subject.pdf

OPEN_CLA = https://openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c/7532931-gerez-des-erreurs-avec-les-exceptions

$(NAME) : $(OBJ)
		$(CC) $(FLAG) $(OBJ) -o $(NAME)

all :	$(NAME)

pdf :
		open $(MOD_PDF)

openclass:
		open $(OPEN_CLA)
clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY:		all clean fclean re
