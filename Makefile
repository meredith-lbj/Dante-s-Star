##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## No file there, just an epitech header example
##

GENERATOR =	generator/

SOLVER =	solver/

all:
	$(MAKE) -C $(GENERATOR)
	$(MAKE) -C $(SOLVER)

clean:
	$(MAKE) -C $(GENERATOR) clean
	$(MAKE) -C $(SOLVER) clean

fclean: clean
	$(MAKE) -C $(GENERATOR) fclean
	$(MAKE) -C $(SOLVER) fclean

re:	fclean all
