CC = gcc

RM = rm -f

SRCS =	

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

NAME = libftprint.a

LIBFT = ../libft

all:	${NAME}
${NAME}:	${OBJS}
	ar rcs $(NAME) $(OBJS)
	cd ${LIBFT} make

clean:
	${RM}
fclean:

re: