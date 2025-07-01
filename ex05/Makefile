CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ./Harl.cpp ./main.cpp

HEAD = ./Harl.hpp

NAME = Harl

$(NAME) :
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

all : $(NAME)

make :	make all

clean :


fclean : 
		rm -f $(NAME)

re :	
		make fclean
		make all

.PHONY: all clean fclean re