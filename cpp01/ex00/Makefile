NAME = a.out
# CC=gcc
# CFLAGS=-Wall -Wextra -Werror -g
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
SOURCES	= \
main.cpp \
newZombie.cpp \
Zombie.cpp \
randomChump.cpp

all: $(NAME)

OBJECTS = $(SOURCES:.cpp=.o)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) 

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
