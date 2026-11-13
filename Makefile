# Makefile

NAME = morpions

SRCS = main.c \
    ajout.c


all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all