NAME = zombieHorde

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98


SRCS =	main.cpp\
		Zombie.cpp\
		zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all re clean fclean