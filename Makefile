# ========================================================================== #

# <-- Color Library --> #

# <-- Text Color --> #
T_BLACK = \033[30m
T_RED = \033[31m
T_GREEN = \033[32m
T_YELLOW = \033[33m
T_BLUE = \033[34m
T_MAGENTA = \033[35m
T_CYAN = \033[36m
T_WHITE = \033[37m

# <-- Text Style --> #
BOLD = \033[1m
ITALIC = \033[2m
UNDERLINE = \033[3m
STRIKETHROUGH = \033[4m

# <-- Background Color --> #
B_BLACK = \033[40m
B_RED = \033[41m
B_GREEN = \033[42m
B_YELLOW = \033[43m
B_BLUE = \033[44m
B_MAGENTA = \033[45m
B_CYAN = \033[46m
B_WHITE = \033[47m

# <-- Reset Everything --> #
RESET = \033[0m

# ========================================================================== #

# <-- Library's Name --> #
NAME = bfl.a

# <-- Compilation Command --> #
CC = gcc

# <-- Compilation Flags --> #
CFLAGS = -Wall -Wextra -Werror

# <-- Remove Command -->#
RM = rm -f

# <-- Directories --> #
BOOL_DIR = bool/
CHAR_DIR = char/
FD_DIR = fd/
MEMORY_DIR = memory/
STRING_DIR = string/

# <-- Files --> #
BOOL_FILES		=	ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isblank.c \
					ft_isdigit.c \
					ft_islower.c \
					ft_isprint.c \
					ft_isupper.c \
					ft_isxdigit.c

CHAR_FILES		=	ft_tolower.c \
					ft_toupper.c

FD_FILES		=	ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c

MEMORY_FILES	=	ft_bzero.c \
					ft_calloc.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c 


STRING_FILES	=	ft_atoi.c \
					ft_atol.c \
					ft_strchr.c \
					ft_strdup.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strncmp.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c

# <-- Directories + Files --> #
BOOL = $(addprefix $(BOOL_DIR), $(BOOL_FILES))
CHAR = $(addprefix $(CHAR_DIR), $(CHAR_FILES))
FD = $(addprefix $(FD_DIR), $(FD_FILES))
MEMORY = $(addprefix $(MEMORY_DIR), $(MEMORY_FILES))
STRING = $(addprefix $(STRING_DIR), $(STRING_FILES))

# <-- Objects --> #
OBJ_BOOL = $(BOOL:.c=.o)
OBJ_CHAR = $(CHAR:.c=.o)
OBJ_FD = $(FD:.c=.o)
OBJ_MEMORY = $(MEMORY:.c=.o)
OBJ_STRING = $(STRING:.c=.o)

# ========================================================================== #

# <-- Main Target --> #
all: $(NAME)

# <--Library Creation-->#
$(NAME): $(OBJ_BOOL) $(OBJ_CHAR) $(OBJ_FD) $(OBJ_MEMORY) $(OBJ_STRING)
	@echo "$(T_YELLOW)$(BOLD)Objects created successfully$(RESET)"
	ar rcs $(NAME) $(OBJ_BOOL) $(OBJ_CHAR) $(OBJ_FD) $(OBJ_MEMORY) $(OBJ_STRING)
	@echo "$(T_GREEN)$(BOLD)$(NAME) created successfully$(RESET)"

# <-- Objects Creation --> #
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# <-- Objects Destruction --> #
clean:
	$(RM) $(OBJ_BOOL) $(OBJ_CHAR) $(OBJ_FD) $(OBJ_MEMORY) $(OBJ_STRING)
	@echo "$(T_RED)$(BOLD)Source Object destroyed successfully$(RESET)"

# <- Clean Execution + bfl.a Destruction -> #
fclean: clean
	$(RM) $(NAME)
	@echo "$(T_RED)$(BOLD)$(NAME) destroyed successfully$(RESET)"

# <- Fclean Execution + All Execution -> #
re: fclean all

# <- Targets Declaration -> #
.PHONY = all clean fclean re

# ========================================================================== #
