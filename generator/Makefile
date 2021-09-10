##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## No file there, just an epitech header example
##

CC = gcc

D_SRC = ./src/

SRC	=	$(D_SRC)/generator.c	\
		$(D_SRC)/alloc_mem.c	\
		$(D_SRC)/free_code.c	\
		$(D_SRC)/create_maze.c	\
		$(D_SRC)/complex_maze.c	\
		$(D_SRC)/random_cell.c	\
		$(D_SRC)/check_move.c	\
		$(D_SRC)/are_walls.c	\
		$(D_SRC)/move_is_valid.c	\
		$(D_SRC)/move_up.c	\
		$(D_SRC)/move_down.c	\
		$(D_SRC)/move_left.c	\
		$(D_SRC)/move_right.c	\
		$(D_SRC)/find_way.c	\
		$(D_SRC)/last_check.c	\
		$(D_SRC)/add_node.c	\
		$(D_SRC)/delete_node.c	\
		$(D_SRC)/free_chaine.c	\
		$(D_SRC)/print_maze.c	\
		$(D_SRC)/free_list.c	\
		$(D_SRC)/final_maze.c	\
		$(D_SRC)/find_perfect_way.c	\
		$(D_SRC)/last_perfect_check.c

INCLUDE	=        -I include/

LIB =   -L./ -lmy

OBJ	=	$(SRC:.c=.o)

CFLAGS =	-W -Wall -Wextra -g

NAME =  generator

all:	GCC

%.o:	%.c
	gcc $(INCLUDE) -g -c $< -o $@

GCC:    $(OBJ)
	$(MAKE) -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LIB) $(INCLUDE) $(CFLAGS)

debug:  $(OBJ)
	$(MAKE) -C lib/
	$(CC) -o $(NAME) $(OBJ) $(LIB) $(INCLUDE) -g $(CFLAGS)

clean:
	$(MAKE) -C lib/ clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C lib/ fclean
	rm -f $(NAME)

re:     fclean debug

unit_tests:
	gcc -o unit_tests tests/test_bubble_sort_array.c src/pushswap.c -I./include/ -L./ -lmy -lcriterion --coverage

run_tests:	libmy.a unit_tests
	./unit_tests

.PHONY:	libmy.a GCC
