CPP = c++

CPPFLAGS= -Wall -Werror -Wextra -std=c++98

CSRCS = main.cpp \
		FileReplace.cpp \

OBJ = $(CSRCS:.cpp=.o)

NAME = fileReplace

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all : ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
