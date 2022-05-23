#include "../includes/so_long.h"

int map_constructor(t_data *data, int x, int y,int x_pos, int y_pos)
{
    if(data->map.map[y][x] == '1')
    {
        mlx_put_image_to_window(data->mlx,data->window.init,data->image.wall,x_pos,y_pos);
        x_pos += 60;
        return(x_pos);
        printf("%d\n",x);
    }
    if(data->map.map[y][x] == '0')
    {
        mlx_put_image_to_window(data->mlx,data->window.init,data->image.floor,x_pos,y_pos);
        x_pos += 60;
        return(x_pos);
        printf("%d\n",x);
    }
    if(data->map.map[y][x] == 'P')
    {
        mlx_put_image_to_window(data->mlx,data->window.init,data->image.floor,x_pos,y_pos);
        mlx_put_image_to_window(data->mlx,data->window.init,data->image.player,x_pos,y_pos);
        x_pos += 60;
        return(x_pos);
        printf("%d\n",x);
    }
    return(0);
}

void    map_rendering(t_data *data)
{
    int y;
    int x;
    int y_pos;
    int x_pos;

    y = 0;
    x = 0;
    y_pos = 0;
    x_pos = 0;
    data->image.wall = mlx_xpm_file_to_image(data->mlx,WALL,&data->image.width,&data->image.height);
    data->image.floor = mlx_xpm_file_to_image(data->mlx,FLOOR,&data->image.width,&data->image.height);
    data->image.player = mlx_xpm_file_to_image(data->mlx,PLAYER,&data->image.width,&data->image.height);
    while(data->map.map[y])
    {
        if(data->map.map[y][x])
        {
            x_pos = map_constructor(data,x,y,x_pos,y_pos);
            x++;
        }
        else
        {
            x = 0;
            x_pos = 0;
            y_pos += 60;
            y++;
        }
    }
    mlx_loop(data->mlx);
}