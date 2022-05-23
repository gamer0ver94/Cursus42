#ifndef SO_LONG_H
# define SO_LONG_H
#endif
#include <mlx.h>
#include "../libft/libft.h"
#include "get_next_line.h"
#include "structs.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <X11/keysym.h>
# include <X11/X.h>
# include <sys/stat.h>
# include <fcntl.h>

# define WALL "assets/wall.xpm"
# define FLOOR "assets/floor.xpm"
# define PLAYER "assets/player.xpm"
# define IMG_SIZE 60

int    create_new_window(t_data *data);
int   key_events(t_data *data);
int kill_window(t_data *data);
void    map_rendering(t_data *data);
void read_map(t_data *data);
