# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnsaka <pnsaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 10:31:57 by peternsaka        #+#    #+#              #
#    Updated: 2024/10/04 10:50:38 by pnsaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= c++

FLAG	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= $(shell find . -iname "*.cpp")

OBJ		= $(SRC:.cpp=.o)

MOD_PDF = https://cdn.intra.42.fr/pdf/pdf/114777/en.subject.pdf

OPEN_CLA = https://openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c/7532931-gerez-des-erreurs-avec-les-exceptions

INTRA	 = https://profile.intra.42.fr/

$(NAME) : $(OBJ)
		$(CC) $(FLAG) $(OBJ) -o $(NAME)

all :	$(NAME)

pdf :
		open $(MOD_PDF)

intra :
		open $(INTRA)

openclass:
		open $(OPEN_CLA)
clean :
		$(RM) $(OBJ) *_shrubbery

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY:		all clean fclean re