##
## EPITECH PROJECT, 2022
## Make file day 10
## File description:
## make file for day 10
##

SRC = *.c

OBJ = $(SRC:.c=.o)

LIB = my

LIB_DIR = .

INCLUDE_DIR = ../../include

NAME = libmy

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar rc $(LIB_DIR)/lib$(LIB).a $(OBJ)
	cp $(LIB_DIR)/lib$(LIB).a $(LIB_DIR)/..
	cp $(LIB).h $(LIB_DIR)/$(INCLUDE_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB_DIR)/lib$(LIB).a
	rm -f $(LIB_DIR)/../lib$(LIB).a
	rm -f $(LIB_DIR)/$(INCLUDE_DIR)/$(LIB).h

re: fclean all
