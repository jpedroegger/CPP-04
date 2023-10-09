CC = c++
RM = rm -rf
OBJS = AMateria.o Cure.o Ice.o Character.o MateriaSource.o
FLAGS = -Wall -Werror -Wextra -ggdb3 -std=c++98
NAME = interface

all: $(OBJS)
		$(CC) $(FLAGS) main.cpp $(OBJS) -o $(NAME)

%.o: %.c
		$(CC) -c $^

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean
		$(MAKE)	