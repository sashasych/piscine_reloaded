# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mharissa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 00:21:54 by mharissa          #+#    #+#              #
#    Updated: 2019/09/11 00:21:57 by mharissa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
PATH_SRC = ./srcs/
PATH_HEADERS = ./includes/
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I $(PATH_HEADERS)
RESULT = -o $(NAME)
SRC = $(PATH_SRC)ft_display_file.c $(PATH_SRC)main.c
OBJ = ft_display_file.o main.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRC)
	gcc $(OBJ) $(RESULT)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
