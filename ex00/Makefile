CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = ./main.cpp ./newZombie.cpp ./randomChump.cpp ./Zombie.cpp

HEAD = ./Zombie.hpp

NAME = BrainZ

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