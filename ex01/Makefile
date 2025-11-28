CC = c++

NAME = scavTrap

FLAGS += -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp \
	Claptrap.cpp \
	ScavTrap.cpp \

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