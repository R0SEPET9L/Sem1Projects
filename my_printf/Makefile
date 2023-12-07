##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## task01
##

SRC = 	print_float.c	\
	print_str.c	\
	print_char.c	\
	search_func_flags.c	\
	print_nbr.c	\
	my_getnbr.c	\
	convert_base.c	\
	create_flag_tree.c	\
	flag_list.c	\
	get_flags.c	\
	my_isnum.c	\
	my_printf.c	\
	my_strlen.c	\
	scientif_base.c	\
	scientif_nb.c	\
	search.c	\
	a_func.c	\
	c_func.c	\
	d_i_func.c	\
	e_func.c	\
	f_func.c	\
	o_u_x_func.c	\
	perc_func.c	\
	s_func.c	\
	p_func.c	\
	g_func.c	\
	pointer_hexa.c

OBJ =	$(SRC:.c =.o)

NAME = libmy.a

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) *.o

clean:
	rm -f *.o *~ *.gcno *.gcda *# coding-style-reports.log

fclean:
	make clean
	rm -f $(NAME)

re:
	make fclean
	make all

func:
	gcc *.c -o printf -Wall -Wextra

tests_run:
	gcc -o tests/unit_tests *.c tests/test_mini_printf.c --coverage -lcriterion
	.tests/unit_tests

retest: re tests_run

style:	clean
	coding-style . .
	cat coding-style-reports.log
	rm -f coding-style-reports.log
