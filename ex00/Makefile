# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 19:19:49 by vcereced          #+#    #+#              #
#    Updated: 2023/12/08 16:15:23 by vcereced         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = ./megaphone.cpp

CFLAGS = -Wall -Werror -Wextra

CFLAGS2 = -std=c++98

OBJT = $(SRC:.cpp=.o)

CC = g++ 

$(NAME): $(OBJT)
	$(CC) $(CFLAGS) $(CFLAGS2) $(SRC) -o $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
