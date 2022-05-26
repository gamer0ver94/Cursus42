#include "../includes/so_long.h"
// void    finish_game(t_data *data, int row, int col)
// {

// }

void    walk_on_coins(t_data *data,int key, int row, int col)
{
    if(key == W)
    {
        data->map.map[row][col] = '0';
        data->map.map[row - 1][col] = 'P';
    }
    if(key == S)
    {
        data->map.map[row][col] = '0';
        data->map.map[row + 1][col] = 'P';
    }
    if(key == A)
    {
        data->map.map[row][col] = '0';
        data->map.map[row][col - 1] = 'P';
    }
    if(key == D)
    {
        data->map.map[row][col] = '0';
        data->map.map[row][col + 1] = 'P';
    }
    data->player.score++;
    printf("%d\n",data->player.score);
}

void    walk_on_floor(t_data *data, int key, int row, int col)
{
    if(key == W)
    {
        data->map.map[row][col] = '0';
        data->map.map[row - 1][col] = 'P';
    }
    if(key == S)
    {
        data->map.map[row][col] = '0';
        data->map.map[row + 1][col] = 'P';
    }
    if(key == A)
    {
        data->map.map[row][col] = '0';
        data->map.map[row][col - 1] = 'P';
    }
    if(key == D)
    {
        data->map.map[row][col] = '0';
        data->map.map[row][col + 1] = 'P';
    }
}

void    frame_engine(t_data *data, int key)
{
    int row;
    int col;

    row = data->player.row;
    col = data->player.col;
    if(key == W)
    {
        if(data->map.map[row - 1][col] == '0')
            walk_on_floor(data,key, row, col);
        if(data->map.map[row - 1][col] == 'C')
            walk_on_coins(data,key,row,col);
    }
    if(key == S)
    {
        if(data->map.map[row + 1][col] == '0')
            walk_on_floor(data,key, row, col);
        if(data->map.map[row + 1][col] == 'C')
            walk_on_coins(data,key,row,col);
    }
    if(key == A)
    {
        if(data->map.map[row][col - 1] == '0')
            walk_on_floor(data,key, row, col);
        if(data->map.map[row][col - 1] == 'C')
            walk_on_floor(data,key, row, col);
    }
    if(key == D)
    {
        if(data->map.map[row][col + 1] == '0')
            walk_on_floor(data,key, row, col);
        if(data->map.map[row][col + 1] == 'C')
            walk_on_floor(data,key, row, col);
    }
    player_position(data);
    debugger(data);
}