# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nerrakeb <nerrakeb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 14:46:51 by nerrakeb          #+#    #+#              #
#    Updated: 2023/12/12 12:30:24 by nerrakeb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

CPPFLAGS= -Wall -Wextra -Werror

CSRCS = Contact.cpp \
		PhoneBook.cpp \
		main.cpp

OBJ = $(CSRCS:.cpp=.o)

NAME = phoneBook

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all : ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all