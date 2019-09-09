# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mharissa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/07 16:29:44 by mharissa          #+#    #+#              #
#    Updated: 2019/09/07 16:30:48 by mharissa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c
OBJECTS = ft_putchar.o ft_strcmp.o ft_swap.o ft_putstr.o ft_strlen.o
HEADER = includes
all:
		gcc -I $(HEADER) -c $(SRCS)
			ar rc $(NAME) $(OBJECTS)
				ranlib $(NAME)

clean:
		/bin/rm -f $(OBJECTS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
