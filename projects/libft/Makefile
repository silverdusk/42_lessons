SRC_DIR = src
BONUS_DIR = bonus
OBJ_DIR = obj

S = ft_bzero.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strncmp.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strjoin.c \
		ft_substr.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRCS = $(addprefix $(SRC_DIR)/,$(S))
BONUS_SRCS = $(addprefix $(BONUS_DIR)/,$(B))

OBJS = $(addprefix $(OBJ_DIR)/, $(S:.c=.o))
BONUS_OBJS = $(addprefix $(OBJ_DIR)/, $(B:.c=.o))

NAME = libft.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	$(LIBC) $(NAME) $(BONUS_OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "Object files removed."

fclean: clean
	$(RM) $(NAME)
	@echo "Library removed."

re: fclean all

.PHONY: all clean fclean re bonus
