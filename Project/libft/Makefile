# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/05 14:49:36 by pvital-m          #+#    #+#              #
#    Updated: 2023/03/28 11:06:12 by pvital-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB_PATH = ../include/
LIB1 = ar -rcs
#SRCS	= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
#			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c	\
#			ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
#			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
#			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
#			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
#			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
#			ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
#			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
#			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
#			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
#			ft_lstmap.c
SRCS	= 	$(shell ls src/*.c)
OBJS = $(SRCS:.c=.o)

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all:		$(NAME)

$(NAME):	$(OBJS)
	@echo "$(BLUE)Making the $(NAME)$(WHITE)\r"
	@$(LIB1) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -I $(LIB_PATH) -c $< -o $(<:.c=.o)

clean:
	@echo  "$(RED)Removing Object files$(WHITE)"
	@$(RM) $(OBJS)

fclean:		clean
	@echo "$(RED)Removing $(NAME)$(WHITE)"
	@$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus

