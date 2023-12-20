# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 20:10:33 by pauescob          #+#    #+#              #
#    Updated: 2023/12/19 20:10:33 by pauescob         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar -rcs
NAME	= libft.a
RM	= rm -rf
SRC	= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
ft_isascii.c ft_isprint.c ft_strlen.c \
ft_memset.c ft_bzero.c ft_memcpy.c
SRC_OBJ	= $(SRC:.c=.o)

# --- Targets ---
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(LIBC) $(NAME) $(SRC_OBJ)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)