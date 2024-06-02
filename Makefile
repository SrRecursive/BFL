# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 15:47:45 by ribana-b          #+#    #+# Malaga       #
#    Updated: 2024/06/02 11:21:53 by ribana-b         ###   ########.com       #
#                                                                              #
# **************************************************************************** #

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
ITALIC = \033[3m
UNDERLINE = \033[4m
STRIKETHROUGH = \033[5m

# <-- Background Color --> #
B_BLACK = \033[40m
B_RED = \033[41m
B_GREEN = \033[42m
B_YELLOW = \033[43m
B_BLUE = \033[44m
B_MAGENTA = \033[45m
B_CYAN = \033[46m
B_WHITE = \033[47m

# <-- Cursor -- > #

CLEAR_LINE = \033[1F\r\033[2K

# <-- Reset Everything --> #
RESET = \033[0m

# ========================================================================== #

MSG = @echo "$(CLEAR_LINE)🧩 🦔 $(T_WHITE)$(BOLD)Compiling $<...$(RESET)"

# <-- Library's Name --> #
NAME = libBFL.a

# <-- Compilation Command --> #
CC = clang

# <-- Compilation Flags --> #
ifdef WITH_DEBUG
CFLAGS = -Wall -Wextra -Werror -ggdb
else
CFLAGS = -Wall -Wextra -Werror
endif

# <-- Include Library -->#
INCLUDE = -I ./include

# <-- Remove Command -->#
RM = rm -rf

# <-- Directories --> #
BOOL_DIR = bool/
CHAR_DIR = char/
DATA_STRUCTURE_DIR = linked_list/
FD_DIR = fd/
BFL_PRINTF_DIR = bfl_printf/
GET_NEXT_LINE_DIR = get_next_line/
MATH_DIR = math/
MEMORY_DIR = memory/
STRING_DIR = string/
OBJ_DIR = obj/

# <-- Files --> #
BOOL_FILES = bfl_isalnum.c \
				bfl_isalpha.c \
				bfl_isascii.c \
				bfl_isblank.c \
				bfl_isdigit.c \
				bfl_islower.c \
				bfl_isprint.c \
				bfl_isupper.c \
				bfl_isxdigit.c

CHAR_FILES = bfl_tolower.c \
				bfl_toupper.c

DATA_STRUCTURE_FILES = ll_create.c \
						ll_destroy.c

FD_FILES = bfl_putaddress_fd.c \
			bfl_putchar_fd.c \
			bfl_putendl_fd.c \
			bfl_puthexl_fd.c \
			bfl_puthexu_fd.c \
			bfl_putnbr_fd.c \
			bfl_putstr_fd.c \
			bfl_putunbr_fd.c

BFL_PRINTF_FILES = bfl_printf.c \
					bfl_fprintf.c

GET_NEXT_LINE_FILES = get_next_line.c

MATH_FILES = bfl_gcd.c \
			 bfl_lcm.c \
			 bfl_pow.c \
			 bfl_sqrt.c

MEMORY_FILES = bfl_bzero.c \
				bfl_calloc.c \
				bfl_free.c \
				bfl_memchr.c \
				bfl_memcmp.c \
				bfl_memcpy.c \
				bfl_memmove.c \
				bfl_memset.c \
				bfl_realloc.c

STRING_FILES = bfl_atoi.c \
				bfl_atol.c \
				bfl_itoa.c \
				bfl_strchr.c \
				bfl_strdup.c \
				bfl_striteri.c \
				bfl_strjoin.c \
				bfl_strlcat.c \
				bfl_strlcpy.c \
				bfl_strlen.c \
				bfl_strmapi.c \
				bfl_strncmp.c \
				bfl_strncmp.c \
				bfl_strnstr.c \
				bfl_split.c \
				bfl_splitlen.c \
				bfl_strrchr.c \
				bfl_substr.c

# <-- Directories + Files --> #
BOOL = $(addprefix $(BOOL_DIR), $(BOOL_FILES))
CHAR = $(addprefix $(CHAR_DIR), $(CHAR_FILES))
DATA_STRUCTURE = $(addprefix $(DATA_STRUCTURE_DIR), $(DATA_STRUCTURE_FILES))
FD = $(addprefix $(FD_DIR), $(FD_FILES))
BFL_PRINTF = $(addprefix $(BFL_PRINTF_DIR), $(BFL_PRINTF_FILES))
GET_NEXT_LINE = $(addprefix $(GET_NEXT_LINE_DIR), $(GET_NEXT_LINE_FILES))
MATH = $(addprefix $(MATH_DIR), $(MATH_FILES))
MEMORY = $(addprefix $(MEMORY_DIR), $(MEMORY_FILES))
STRING = $(addprefix $(STRING_DIR), $(STRING_FILES))

# <-- Objects --> #
OBJ = $(patsubst $(BOOL_DIR)%.c, $(OBJ_DIR)%.o, $(BOOL)) \
		$(patsubst $(CHAR_DIR)%.c, $(OBJ_DIR)%.o, $(CHAR)) \
		$(patsubst $(DATA_STRUCTURE_DIR)%.c, $(OBJ_DIR)%.o, $(DATA_STRUCTURE)) \
		$(patsubst $(FD_DIR)%.c, $(OBJ_DIR)%.o, $(FD)) \
		$(patsubst $(BFL_PRINTF_DIR)%.c, $(OBJ_DIR)%.o, $(BFL_PRINTF)) \
		$(patsubst $(GET_NEXT_LINE_DIR)%.c, $(OBJ_DIR)%.o, $(GET_NEXT_LINE)) \
		$(patsubst $(MATH_DIR)%.c, $(OBJ_DIR)%.o, $(MATH)) \
		$(patsubst $(MEMORY_DIR)%.c, $(OBJ_DIR)%.o, $(MEMORY)) \
		$(patsubst $(STRING_DIR)%.c, $(OBJ_DIR)%.o, $(STRING))

# ========================================================================== #

# <-- Main Target --> #
all: $(NAME)

# <-- Library Creation --> #
$(NAME): $(OBJ_DIR) $(OBJ)
	@echo "$(CLEAR_LINE)✅ 🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_GREEN)created successfully$(RESET)"
	@ar rcs $@ $(OBJ)
	@echo "✅ 🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_GREEN)created successfully$(RESET)"

# <-- Object Directory Creation --> #
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# <-- Objects Creation --> #
$(OBJ_DIR)%.o: $(BOOL_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o: $(CHAR_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o: $(DATA_STRUCTURE_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o: $(FD_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o: $(BFL_PRINTF_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o: $(GET_NEXT_LINE_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o: $(MATH_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o: $(MEMORY_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR)%.o: $(STRING_DIR)%.c
	$(MSG)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# <-- Objects Destruction --> #
clean:
	@$(RM) $(OBJ_DIR)
	@echo "🗑️  🦔 $(T_YELLOW)$(BOLD)Objects $(RESET)$(T_RED)destroyed successfully$(RESET)"

# <-- Clean Execution + Library Destruction --> #
fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️  🦔 $(T_MAGENTA)$(BOLD)$(NAME) $(RESET)$(T_RED)destroyed successfully$(RESET)"

# <-- Fclean Execution + All Execution --> #
re: fclean all

# <-- Testers -->
test: all
	@$(CC) $(CFLAGS) $(INCLUDE) test/main_test.c $(NAME)
	@./a.out
	@rm ./a.out *.txt

# <-- Debug --> #
debug: fclean
	@make -s WITH_DEBUG=1

# <-- Targets Declaration --> #
.PHONY: all clean debug fclean re test

# ========================================================================== #
