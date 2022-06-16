# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 17:18:11 by dpaulino          #+#    #+#              #
#    Updated: 2022/06/16 17:30:49 by dpaulino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

SRCS			=	main.c
					
OBJS			=	${SRCS:.c=.o}

LD_FLAGS		=	-L libft

LIBFT_FLAGS		=	-lft

CC				=	gcc -g

CFLAGS			=	-Wall -Werror -Wextra -ggdb3

$(NAME)			:	${OBJS}
					make -C libft
					cp ../libft/libft.a .
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