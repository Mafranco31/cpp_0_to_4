# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 16:32:28 by mafranco          #+#    #+#              #
#    Updated: 2024/04/08 16:50:23 by mafranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game

SRC = main.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -MMD

OBJ = $(SRC:.cpp=.o)
DEPS = $(SRC:.cpp=.d)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

-include $(DEPS)
$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm *.o *.d

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
