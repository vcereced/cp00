# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcereced <vcereced@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 19:58:45 by vcereced          #+#    #+#              #
#    Updated: 2023/12/08 16:14:55 by vcereced         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = planner

SRC = add.cpp access_add.cpp search.cpp planner_utils.cpp main.cpp 

FLAGS = -Wall -Werror -Wextra -std=c++98

CC = g++

OBJDIR = ./obj

OBJS = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(OBJDIR)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):  $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all : $(NAME)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
