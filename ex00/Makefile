CC = c++

NAME = claptrap

FLAGS += -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp \
	Claptrap.cpp \

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS)

all: $(NAME)

%.o:%.cpp
	$(CC) ${FLAGS} $< -c

clean:
	rm -f $(OBJ)

fclean: clean
    rm -f $(OBJ)
