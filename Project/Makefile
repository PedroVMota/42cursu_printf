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
SRC_BONUS = ./$(SRCF)/ft_plus.c
BONUS_OBJ = $(SRC_BONUS:.c=.o)


# ===== colors

ok = \033[32m
err = \033[31m
RESET_COLOR  = \e[m

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT_P) --no-print
	@printf " [$(ok)OK$(RESET_COLOR)] Libft\n"
	@cp -f $(LIBFT_P)libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@printf " [$(ok)OK$(RESET_COLOR)] $(NAME)\n"

%.o : %.c
	@printf " [$(ok)OK$(RESET_COLOR)] $@\n"
	@cc $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	@printf " [$(ok)OK$(RESET_COLOR)] Object files deleted\n"
	@rm -rf */*.o

fclean: clean
	@printf " [$(ok)OK$(RESET_COLOR)] Files Deleted\n"
	@make fclean -C $(LIBFT_P) --no-print
	@rm -rf $(LIBFT_P)libft.a ./$(NAME)


create: $(NAME) bonus
	@cc -Wall -Wextra -Werror -I $(INCLUDE)  main.c $(NAME) -o program
	./program
	@rm program

.PHONY:		all clean fclean re
