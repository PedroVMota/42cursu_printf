#== NAMES AND PATHS =
NAME		= libftprintf.a
INCLUDE		= ./include/
LIBFT_P		= ./libft/
SRCDIR		= src/
OBJDIR 		= .obj/

#===== COMPILER ====
CC = cc
CFLAGS = -Wall -Wextra -Werror

#FILES

SRCF = src
SRC = ./$(SRCF)/ft_hex.c ./$(SRCF)/ft_int.c ./$(SRCF)/ft_print_chr.c ./$(SRCF)/ft_printf.c ./$(SRCF)/ft_addr.c
OBJ = $(SRC:.c=.o)
#SRC_BONUS = ./$(SRCF)/ft_

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(CYAN)Compiling for libft.a$(RESET)\n"
	@make -C $(LIBFT_P) --no-print
	@printf "$(MAGENTA)Creating printlibft.a$(RESET)\n"
	@cp -f $(LIBFT_P)libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@printf "$(GREEN)Printf readdy to use$(WHITE)\n"

%.o : %.c
	@cc $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	@make clean -C $(LIBFT_P) --no-print
	@rm -rf */*.o

fclean: clean
	@printf "$(RED)Removing all the library\n$(RESET)"
	@rm -rf $(LIBFT_P)libft.a ./$(NAME)

.PHONY:		all clean fclean re
