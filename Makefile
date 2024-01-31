##
## EPITECH PROJECT, 2023
## B-PSU-100-PAR-1-1-navy-guillaume.deplaine
## File description:
## Makefile
##

CC = gcc

SRC =	process_info.c \
		kill.c \
		game_info.c \
		mem_alloc_2d_array.c \
		display.c	\
		rm_map.c \
		win.c \
		attack.c \
		player_1.c \
		player_2.c

OBJ = $(SRC:.c=.o)

MAIN = main.c

LIB = my

LIB_DIR = ./lib

INCLUDE_DIR = ./include

NAME = navy

TEST_NAME = test.c 					\
			display.c 				\
			game_info.c				\
			mem_alloc_2d_array.c 	\
			rm_map.c 				\
			win.c

TEST_DIR = ./tests

all: $(NAME)

make_lib:
	make -f Makefile -i -C $(LIB_DIR)/$(LIB)/

$(NAME): make_lib
	gcc -c $(SRC) $(MAIN) -I$(INCLUDE_DIR) -L$(LIB_DIR) -l$(LIB)
	gcc $(OBJ) $(MAIN:.c=.o) -o $(NAME) -I$(INCLUDE_DIR) -L$(LIB_DIR) -l$(LIB)

clean:
	rm -f $(OBJ)
	rm -f $(MAIN:.c=.o)
	rm -f *.gcno
	rm -f *.gcda
	make -C $(LIB_DIR)/$(LIB)/ clean

fclean: clean
	rm -f $(NAME)-test.out
	rm -f $(NAME)
	make -C $(LIB_DIR)/$(LIB)/ fclean

re: fclean all

tests_run:
	gcc $(TEST_DIR)/$(TEST_NAME) \
	-o $(NAME)-test.out -I$(INCLUDE_DIR) \
	-L$(LIB_DIR) -l$(LIB) --coverage -lcriterion
	./$(NAME)-test.out
	gcovr --exclude tests/
	gcovr --exclude tests/ -b

.PHONY: tests_run re clean fclean all make_lib
