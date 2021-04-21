# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agiordan <agiordan@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/21 14:53:26 by agiordan          #+#    #+#              #
#    Updated: 2021/04/21 16:51:57 by agiordan         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# ecris, puis ecris entre guillemets "ecris, puis ecris en guillemets"
# a "a"

NAME = Sully

SRC =	$(NAME).c
OBJ = $(SRC:%.c=%.o)

CC = clang
FLAGS += -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
