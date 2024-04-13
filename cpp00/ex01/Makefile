# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafranco <mafranco@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/07 16:32:28 by mafranco          #+#    #+#              #
#    Updated: 2024/04/13 13:47:23 by mafranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = repertoire

SRC = main.cpp Contact.cpp PhoneBook.cpp
INC = Contact.hpp PhoneBook.hpp

CC = c++
RM = rm -f

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
	$(RM) *.o *.d

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
