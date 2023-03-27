##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## compil project binary
##

SRC			=	main.c

DIR_SRC 	=       $(addprefix src/, $(SRC))

SRC_TEST	=

OBJ     	=       $(DIR_SRC:.c=.o)

OBJ_TEST	=		$(SRC_TEST:.c=.o)

CFLAGS		=	-Wall -Wextra

CPPFLAGS	=	-I./include/ -Ilib/include/

NAME		=	new_project

MY_LIB		=	-L lib/lib_folder -lmy_lib

all: 	make_lib $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(MY_LIB)

make_lib:
	make -C lib/lib_folder

clean:
	make -C lib/lib_folder clean
	rm -f $(OBJ) vgcore* *.gc*

fclean:	clean
	make -C lib/lib_folder fclean
	rm -f $(NAME)
	rm -f unit_tests*

re:	fclean all

tests_run:	make_lib $(OBJ_TEST)
	gcc -o unit_tests $(OBJ_TEST) tests/tests.c tests/tests_lib.c \
	--coverage -lcriterion $(CPPFLAGS) $(MY_LIB)

	./unit_tests

.PHONY: all clean fclean re make_lib tests_run
