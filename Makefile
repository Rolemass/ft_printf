# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rolemass <rolemass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/01 18:48:13 by rolemass          #+#    #+#              #
#    Updated: 2017/07/01 18:51:19 by rolemass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDES = -I ./includes

SRC_ALGO =

SRC_PARSING =

SRC_DISPLAY =

SRC_ALGO_PATH = $(addprefix algo/,$(SRC_ALGO))

SRC_PARSING_PATH = $(addprefix parsing/,$(SRC_PARSING))

SRC_DISPLAY_PATH = $(addprefix display/,$(SRC_DISPLAY))

SRC = main.c $(SRC_ALGO_PATH) $(SRC_PARSING_PATH) $(SRC_DISPLAY_PATH)

OBJ		= $(addprefix $(OBJDIR),$(SRC:.c=.o))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g3 -fsanitize=adress

LIBFT	= ./Libft/libft.a
LIBINC	= -I./Libft
LIBLINK	= -L./Libft -lft

SRCDIR	= ./srcs/
INCDIR	= ./includes/
OBJDIR	= ./obj/

all: $(NAME)

obj:
	mkdir -p ./obj/ ./obj/algo/ ./obj/parsing/ ./obj/display/

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $(LIBINC) -I $(INCDIR) -o $@ -c $<

$(NAME): obj $(OBJ)
	make -C ./Libft
	$(CC) $(CFLAGS) $(LIBLINK) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJDIR)
	make -C Libft/ clean

fclean: clean
	rm -f $(NAME)
	rm -f ./Libft/libft.a

re: fclean all


.PHONY: clean all re fclean
