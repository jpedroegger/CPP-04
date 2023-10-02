CC = c++
RM = rm -rf
OBJS = Dog.o Cat.o Animal.o Brain.o
FLAGS = -Wall -Werror -Wextra -std=c++98
NAME = brain

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