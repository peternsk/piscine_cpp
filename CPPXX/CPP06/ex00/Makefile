# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: peternsaka <peternsaka@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 13:26:40 by peternsaka        #+#    #+#              #
#    Updated: 2024/09/23 14:12:04 by peternsaka       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


##################################
###				BASIC		   ###
##################################

NAME	= Conversion_scalaire

CC		= c++

FLAG	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

SRC		= $(shell find . -iname "*.cpp")

OBJ		= $(SRC:.cpp=.o)

##################################
###			LINK ADDY		   ###
##################################

MOD_PDF =	https://cdn.intra.42.fr/pdf/pdf/58239/fr.subject.pdf

OPEN_CLA =	https://openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c/7532931-gerez-des-erreurs-avec-les-exceptions

INTRA	 =	https://profile.intra.42.fr/

NOTION	=	https://www.notion.so/CPP-ffa1d5d945a748788f9841a947fa9909

LUCID	=	https://lucid.app/lucidchart/d898b030-b5e5-4929-b6e5-69f10858e3ab/edit?beaconFlowId=540BC7FB0CC64FC6&page=0_0&invitationId=inv_74cb3db1-e97d-4475-b46b-a1a3e0ab6ec0

$(NAME) : $(OBJ)
		$(CC) $(FLAG) $(OBJ) -o $(NAME)

all :	$(NAME)


##################################
###				LINKS		   ###
##################################

pdf :
	open $(MOD_PDF)

intra :
	open $(INTRA)

openclass:
	open $(OPEN_CLA)

notion :
	open $(NOTION)

lucid :
	open $(LUCID)

##################################
###	     	   CLEANING 	   ###
##################################

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY:		all clean fclean re
