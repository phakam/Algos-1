# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mphaka <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/14 10:34:37 by mphaka            #+#    #+#              #
#    Updated: 2017/12/14 10:34:39 by mphaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = filler

SRC = main.c\
	  find_player.c\
	  check_piece.c\
	  get_info.c\
	  get_map.c\
	  get_next_line.c\
	  player.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		make -C libft/ fclean && make -C libft/
		gcc -Wall -Wextra -Werror -c $(SRC)
		gcc -Wall -Wextra -Werror $(OBJ) libft/libft.a -o $(NAME)

clean:
		/bin/rm -f $(OBJ)
		make -C libft/clean

fclean:
		/bin/rm -f $(NAME)
		/bin/rm -f libft/libft.a
		/bin/rm -f *.o
		/bin/rm -f libft/*.o

re: fclean all
