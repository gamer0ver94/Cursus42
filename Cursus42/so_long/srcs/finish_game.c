#include "../includes/so_long.h"

void    finish_game(t_data *data, int key)
{
    int row;
    int col;

    row = data->player.row;
	col = data->player.col;
        if (key == W && data->map.map[row - 1][col] == 'E' && data->coin.amount == 0)
        {
            printf("GG\n");
            exit(0);
        }
        if (key == S && data->map.map[row + 1][col] == 'E' && data->coin.amount == 0)
        {
            printf("GG\n");
            exit(0);
        }
        if (key == A && data->map.map[row][col - 1] == 'E' && data->coin.amount == 0)
        {
            printf("GG\n");
            exit(0);
   }
        if (key == D && data->map.map[row][col + 1] == 'E' && data->coin.amount == 0)
    {
        printf("GG\n");
        exit(0);
    }
}