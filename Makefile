SRC =	./push_swap_utils_next.c\
		./push_swap_utils.c\
		./ft_split.c\
		./swap.c\
		./rotate.c\
		./reverse_rotate.c\
		./push.c\
		./parsing_next.c\
		./parsing.c\
		./only_five.c\
		./small_algo.c\
		./algo.c\
		./find_smart.c\
		./sort.c\
		./algo_next.c\
		./algo_verif.c\
		./main.c\

C = cc
FLAGS = -Wall -Wextra -Werror
NAME = push_swap

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(C) -c $(FLAGS) $< -o $@

$(NAME): $(OBJ)
	$(C) $(FLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re