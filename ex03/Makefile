CC = c++

NAME = fragTrap

FLAGS += -Wall -Wextra -Werror -std=c++98 -g -Wshadow -Wno-shadow

SRC = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS)

all: $(NAME)

%.o:%.cpp
	$(CC) ${FLAGS} $< -c

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
