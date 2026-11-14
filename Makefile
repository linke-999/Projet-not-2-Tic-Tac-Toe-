# Makefile

NAME = morpions

SRCS = main.c \
    ajout.c \
	verif_entree.c \
	victoir_test.c \
	victoir_horizontal.c


all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all