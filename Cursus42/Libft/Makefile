#My makefile need to have es règles $(NAME), all, clean, fclean et re.

CC = gcc
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_isalpha.c ft_memcpy.c ft_bzero.c ft_isalnum.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_isascii.c ft_memset.c ft_strlcat.c \
	ft_isascii.c ft_memmove.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c 
RM = rm -f
DEEPS = libft.h
NAME = libft.a
all:	${NAME}
	
${NAME}:	${OBJS}
	ar rcs $(NAME) $(OBJS)
clean:
	${RM} ${OBJS}
fclean:		clean
	${RM} ${NAME}

re:		fclean ${NAME}
