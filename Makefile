
##
## EPITECH PROJECT, 2020
## B-PSU-101-BAR-1-1-minishell1-leon.ducasse
## File description:
## Makefile
##

NAME	=	mysh

CFLAGS	+=	-I ./include/ -I ./lib/include/
CFLAGS	+=	-pedantic
CFLAGS	+=	-W -Wall -Wextra -Werror -g3

LDLIBS	+=	-L./lib/ -lmy

PATH_SRC	=	./src/

RWILDCARD	=	$(foreach d,$(wildcard $1*),$(call RWILDCARD,$d/,$2) $(filter $(subst *,%,$2),$d))

SRC		+=	$(call RWILDCARD,$(PATH_SRC),*.c)

OBJ		=	$(SRC:.c=.o)

CC		=	gcc

RM		=	rm -rf

all:	$(NAME)

$(NAME):	make_lib $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDLIBS)

make_lib:
	make -C lib/

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C lib/

fclean:	clean
	$(RM) $(NAME)
	$(MAKE) fclean -C lib/

re:	fclean all
	$(MAKE) re -C lib/

auteur:
	echo $(USER) > auteur
