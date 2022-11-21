# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 19:02:50 by aeloyan           #+#    #+#              #
#    Updated: 2022/08/28 15:02:41 by aeloyan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)
	  
OBJS = $(SRCS:.c=.o)

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

RM = rm -f

CC = cc

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) -lftprintf -L.

all:	$(NAME)

clean:
	$(RM) $(OBJS) 
	
fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean fclean re all
