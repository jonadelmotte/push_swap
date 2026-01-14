SRC = ./main.c\
	./algo_verif.c\
	./algo.c\
	./compare.c\
	./ft_split.c\
	./opperations_array.c\
	./parsing.c\
	./push_swap_utils.c\
	./rotate_array.c\
	./small_algo.c\

C = cc
FLAGS = -Wall -Werror -Wextra
NAME = push_swap
OBJ = $(SRC:.c.o)

all: $(NAME)

%.o: %.c
	$(C) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(C) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re