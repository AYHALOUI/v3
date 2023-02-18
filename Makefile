# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 17:28:54 by ahaloui           #+#    #+#              #
#    Updated: 2023/02/18 17:28:54 by ahaloui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

CFLAGS = -Wall -Werror -Wextra

SRCS = create_stack.c max.c min.c parse_args.c push.c rotate_reverse.c rotate.c swap.c utils.c utils1.c utils2.c maic.c

CC = cc

OBJ = $(SRCS:.c=.o)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME) 

$(NAME) : $(OBJ) $(SRCS) 
		$(CC) $(FLAGS) $(OBJ) $(SRCS) -o $(NAME)

clean :
		@rm -rf $(OBJ)

fclean : clean
		@rm -rf $(NAME)

re :	fclean all