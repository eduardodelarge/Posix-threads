# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caeduard <caeduard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 20:03:41 by caeduard          #+#    #+#              #
#    Updated: 2022/08/19 14:36:58 by caeduard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color Aliases
DEFAULT = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

NAME = philo

INC = includes/philo.h

SRC = srcs/philo.c

CC = gcc

FLAGS = -Wall -Wextra -Werror -pthread

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
	echo -e "${GREEN}$(NAME) compilation succeeded${DEFAULT}"

all: $(NAME) $(OBJ) $(INC)
	echo -e "${GREEN}All compilation succeeded${DEFAULT}"
	
%.o: %.c $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(NAME) $(OBJ)
	echo -e "${GREEN}Clean succeeded${DEFAULT}"

fclean: clean
	@rm -f $(NAME) $(OBJ)
	echo -e "${GREEN}Full clean succeeded${DEFAULT}"

re: fclean all
	echo -e "${GREEN}Re compilation succeeded${DEFAULT}"
	
git:
	@git add .
	@git commit -m "update"
	@git push
	echo -e "${GREEN}Git succeeded${DEFAULT}"

norminette:
	@norminette $(SRCDIR) $(INCDIR)

.PHONY: all clean fclean re git norminette