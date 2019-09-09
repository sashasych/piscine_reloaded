# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mharissa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/20 16:26:44 by mharissa          #+#    #+#              #
#    Updated: 2019/06/20 18:32:54 by mharissa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
NAMELIB = libft.a
SRCS = srcs/ft_putchar.c  srcs/ft_putstr.c
OBJECTS = ft_putchar.o ft_putstr.o
HEADER = includes
all:
	@gcc -I $(HEADER) -c $(SRCS)
	@ar rc $(NAMELIB) $(OBJECTS)
	@ranlib $(NAMELIB)
	@gcc main.c -L. -lft -o $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAMELIB)
	@/bin/rm -f $(NAME)
