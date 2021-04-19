##
## EPITECH PROJECT, 2020
## lib
## File description:
## makefile
##

PATH_SRC	=	./src/

RWILDCARD	=	$(foreach d,$(wildcard $1*),$(call RWILDCARD,$d/,$2) $(filter $(subst *,%,$2),$d))

SRC		+=	$(call RWILDCARD,$(PATH_SRC),*.c)

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-I ./include/
CFLAGS	+=	-W -Werror -Wall -Wextra -pedantic -Wno-long-long

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
