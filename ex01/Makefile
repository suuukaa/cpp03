NAME = ex01
CC = c++ -std=c++98
CFLAGS =  -Wall -Wextra -Werror

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

all: $(NAME)

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all