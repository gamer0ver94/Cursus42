#include "../includes/so_long.h"

void check_move(t_data *data, int button)
{
    printf("ithe button is %d",button);
    int row;
    int col;
    row = data->image.player.y_pos;
    col = data->image.player.x_pos;
    if(button == D)
    {
        if(data->map.map[row][col + 1] == 1)
            return;
        if(data->map.map[row][col + 1] == 0)
        {
            data->image.player.x_pos++;
            data->map.map[row][col] = '0';
            data->map.map[row][col + 1] = 'P';
        }
    }
    if(button == W)
    {
        if(data->map.map[row - 1][col] == 1)
            return;
        if(data->map.map[row - 1][col] == 0)
        {
            data->image.player.y_pos--;
            data->map.map[row][col] = '0';
            data->map.map[row - 1][col] = 'P';
        }
    }
    if(button == A)
    {
        if(data->map.map[row][col - 1] == 1)
            return;
        if(data->map.map[row][col - 1] == 0)
        {
            data->image.player.x_pos--;
            data->map.map[row][col] = '0';
            data->map.map[row][col - 1] = 'P';
        }
    }
    if(button == S)
    {
        if(data->map.map[row + 1][col] == 1)
            return;
        if(data->map.map[row + 1][col] == 0)
        {
            data->image.player.y_pos++;
            data->map.map[row][col] = '0';
            data->map.map[row + 1][col] = 'P';
        }
    }
}