# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 17:18:11 by dpaulino          #+#    #+#              #
#    Updated: 2022/07/28 23:05:35 by gameoverstation  ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

SRCS			=	main.c srcs/create_stack.c srcs/print_list.c srcs/sort_verification.c srcs/error_handler.c srcs/swap_rules.c srcs/push_rules.c \
					srcs/del_first_elem.c srcs/rotate_rules.c srcs/reverse_rules.c srcs/sort_big_num.c srcs/smart_rotate.c
					
OBJS			=	${SRCS:.c=.o}

LD_FLAGS		=	-L libft

LIBFT_FLAGS		=	-lft

CC				=	gcc -g

CFLAGS			=	-Wall -Werror -Wextra -ggdb3

$(NAME)			:	${OBJS}
					@make -C libft
					cp libft/libft.a .
					@mv libft.a ${NAME}
					${CC} ${CFLAGS} ${LD_FLAGS} ${OBJS} -o ${NAME} ${LIBFT_FLAGS}

all				:	${NAME}

clean			:
					make clean -C libft
					rm -rf ${OBJS}

fclean			:	clean
					make fclean -C libft
					rm -rf ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re