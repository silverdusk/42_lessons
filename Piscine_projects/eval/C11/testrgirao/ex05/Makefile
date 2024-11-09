SRC_FILES = srcs/ft_atoi.c srcs/ft_putnbr.c srcs/ops.c srcs/do-op.c
OBJ_FILES = ${SRC_FILES:srcs/%.c=srcs/%.o}

all: do-op

do-op: $(OBJ_FILES)
	cc -Wall -Wextra -Werror $(OBJ_FILES) -o $@

$(OBJ_FILES): $(SRC_FILES)
	cc -Wall -Wextra -Werror -I includes -c ${@:%.o=%.c} -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f do-op

re: fclean all
