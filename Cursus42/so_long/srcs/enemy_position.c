#include "../includes/so_long.h"

void    enemy_position(t_data *data)
{
    int x;
    int y;

    x = 0;
    y = 0;
    while(data->map.map[y])
    {
        while(data->map.map[y][x])
        {
            if(data->map.map[y][x] == 'M')
            {
                data->enemy.row = y;
                data->enemy.col = x;
            }
            x++;
        }
        x = 0;
        y++;
    }
}