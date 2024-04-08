# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 16:32:28 by mafranco          #+#    #+#              #
#    Updated: 2024/04/08 17:57:07 by mafranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = game

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
INC = Weapon.hpp HumanA.hpp HumanB.hpp

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