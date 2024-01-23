# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 23:40:24 by nerrakeb          #+#    #+#              #
#    Updated: 2024/01/23 18:53:49 by nerrakeb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

CPPFLAGS= #-Wall -Werror -Wextra -std=c++98

CSRCS = main.cpp \
		Base.cpp \

OBJ = $(CSRCS:.cpp=.o)

NAME = base

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all : ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
