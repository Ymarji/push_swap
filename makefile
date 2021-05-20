NAME = push_swap
LIB = push_swap.a
SRC =./push_swap.c \
	./ls_utile.c \
	./operation.c

LIBFT = ./libft/libft.a

OBJ = $(SRC:.c=.o)

# FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ) 
	ar rcs $(LIB) $(OBJ)
	cd ./libft && make
	gcc -lncurses $(FLAGS) $(LIB) $(LIBFT) -o $(NAME)

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	@cd ./libft && make -s fclean
	@rm -rf $(OBJ) $(LIB)

fclean: clean
	@rm -f $(NAME)

re: fclean all