#include "../includes/so_long.h"

int enemy_moves(t_data *data)
{
    if(data->enemy.row != data->player.row || data->enemy.col != data->player.col)
    {
		if(data->enemy.row == data->player.row)
		{
			if(data->enemy.col < data->player.col)
        	{
				data->map.map[data->enemy.row][data->enemy.col] = '0';
				data->map.map[data->enemy.row][data->enemy.col + 1] = 'M';
				data->enemy.col++;
				return(0);
			}
        	if(data->enemy.col > data->player.col)
       		{
				data->map.map[data->enemy.row][data->enemy.col] = '0';
				data->map.map[data->enemy.row][data->enemy.col - 1] = 'M';
				data->enemy.col--;
				return(0);
			}
		}
			if(data->enemy.row > data->player.row)
			{
				data->map.map[data->enemy.row][data->enemy.col] = '0';
				data->map.map[data->enemy.row -1][data->enemy.col] = 'M';
				data->enemy.row --;
				return(0);
			}
       		if(data->enemy.row < data->enemy.col)
        	{
				data->map.map[data->enemy.row][data->enemy.col] = '0';
				data->map.map[data->enemy.row + 1][data->enemy.col] = 'M';
				data->enemy.row ++;
				return(0);
			}
    }
    enemy_position(data);
	return(0);
}