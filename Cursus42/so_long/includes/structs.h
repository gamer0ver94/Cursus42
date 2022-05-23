#ifndef STRUCT_H
# define STRUCT_H
#endif

typedef struct s_window
{
	void	*init;
	int		width;
	int		height;
	char	*title;
}	t_window;

typedef struct s_map
{
	char **map;
	char *path;
	int width;
	int height;

}	t_map;

typedef struct s_controls
{
	int	esc;
	int w;
	int s;
	int a;
	int d;
	int r;
}	t_controls;

typedef struct s_player
{
	int score;
	int	pos_x;
	int	pos_y;
}	t_player;

typedef struct s_image
{
	int		width;
	int		height;
	void	*floor;
	void	*wall;
	void 	*player;
	void	*enemy;
}	t_image;

typedef	struct s_data
{
	void		*mlx;
	t_window	window;
	t_map		map;
	t_controls	controls;
	t_player	player;
	t_image		image;
}	t_data;
