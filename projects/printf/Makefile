SRC = ft_printf.c ft_helpers.c ft_putptr.c
OBJS = $(SRC:.c=.o)
NAME = libftprintf.a

CC = gcc
AR = ar rcs
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

# Compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Build the library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

# Default target
all: $(NAME)

# Clean object files
clean:
	$(RM) $(OBJS)
	@echo "Cleaned object files."

# Clean all generated files
fclean: clean
	$(RM) $(NAME)
	@echo "Cleaned library and object files."

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
