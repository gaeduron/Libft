# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gduron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/19 20:14:23 by gduron            #+#    #+#              #
#*   Updated: 2017/04/04 02:21:32 by bduron           ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = \
ft_putchar.c \
ft_putstr.c \
ft_swap.c \
ft_strcmp.c \
ft_strlen.c \
ft_strncmp.c \
ft_strlen.c \
ft_strdup.c \
ft_strstr.c \
ft_strcat.c \
ft_strncat.c \
ft_strlcat.c \
ft_strcpy.c \
ft_strncpy.c \
ft_strnstr.c \
ft_strchr.c \
ft_strrchr.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isprint.c \
ft_isalnum.c \
ft_isascii.c 

CC = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

HEADER = includes

VPATH = srcs/

all: $(NAME)

$(NAME): $(SRC)
	@gcc -c $^ $(CC) -I $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Compilation:\033[92m OK\033[0m"

clean:
	@echo "Deleting:\033[33m *.o\033[0m"
	@rm -f *.o

fclean: clean
	@echo "Deleting:\033[33m $(NAME)\033[0m"
	@rm -f $(NAME)

re: fclean all
