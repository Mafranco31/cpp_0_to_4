# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 16:32:28 by mafranco          #+#    #+#              #
#    Updated: 2024/04/07 16:35:13 by mafranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror

FL2 = -std=c++98

all:
	$(CC) $(SRC) -o $(NAME) $(FLAGS) $(FL2)

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
