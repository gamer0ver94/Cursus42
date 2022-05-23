#include "../includes/so_long.h"

int    create_new_window(t_data *data)
{
    data->window.width = data->map.width * IMG_SIZE;
    data->window.height = data->map.height * IMG_SIZE;
    data->mlx = mlx_init();
    data->window.init = mlx_new_window(data->mlx,data->window.width,data->window.height,"gae");
    return(0);
}