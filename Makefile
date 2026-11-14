# Makefile

NAME = Tic_Tac_Toe

SRCS = main.c \
	functions.c 

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
