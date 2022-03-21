CC = gcc

RM = rm -f
LIBFT = ../libft/

SRCS =	${LIBFT} libft.h

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

NAME = libftprint.a


all:	${NAME}
${NAME}:	${OBJS}
	cd ${LIBFT} && make

clean:

fclean:
	cd ${LIBFT} && make fclean
re: