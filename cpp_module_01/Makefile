NAME = Warlock
CC = c++
CFLAGS = -Werror -Wall -Wextra -fsanitize=address -g3
FILES = main \
		Warlock \
		Aspell
SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) *.dSYM

re: fclean all

run: all
	@./$(NAME)

.PHONY: all clean fclean re run