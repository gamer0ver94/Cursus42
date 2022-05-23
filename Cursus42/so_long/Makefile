NAME			=	so_long

SRCS			=	main.c srcs/create_new_window.c srcs/get_next_line.c\
srcs/get_next_line_utils.c srcs/key_events.c\
srcs/map_rendering.c srcs/read_map.c 
OBJS			=	${SRCS:.c=.o}

LD_FLAGS		=	-L libft -L mlx

MLX_FLAGS		=	 -lmlx -lXext -lX11

LIBFT_FLAGS		=	-lft

# HEAD			=	-I includes -I libft -I minilibx-linux

CC				=	gcc -g

CFLAGS			=	-Wall -Werror -Wextra

$(NAME)			:	${OBJS}
					make -C libft
					make -C minilibx-linux
					${CC} ${CFLAGS} ${LD_FLAGS} ${OBJS} -o ${NAME} ${LIBFT_FLAGS} ${MLX_FLAGS}

all				:	${NAME}

clean			:
					make clean -C libft
					make clean -C minilibx-linux
					rm -rf ${OBJS}

fclean			:	clean
					make fclean -C libft
					rm -rf ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re