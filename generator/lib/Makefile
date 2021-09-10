##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## No file there, just an epitech header example
##

CC = gcc

SRC	=	my_str_isnum.c      \
		my_getnbr.c

INCLUDE	=        -I ../include/

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

%.o:	%.c
	$(CC) $(INCLUDE) -g -c $< -o $@

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../
	rm libmy.a

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all

.PHONY:	libmy.a NAME CC
