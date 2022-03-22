CC = gcc

RM = rm -f
LIBFT = ../libft

SRCS =	ft_printf.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

NAME = libftprint.a


all:	${NAME}
${NAME}:	${OBJS}
	make -C ${LIBFT}
	cp ../libft/libft.a .
	@mv libft.a ${NAME}
	@ar rcs ${NAME} ${OBJS}
	@echo "done"

clean:
	make clean -C ${LIBFT}
	
fclean:	clean
	${RM} ${LIBFT}/libft.a
	${RM} ${NAME}

re:	fclean all