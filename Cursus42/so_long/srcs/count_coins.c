#include "../includes/so_long.h"

int count_coins(t_data  *data)
{
    int coins;
    int row;
    int col;

    coins = 0;
    row = 0;
    col = 0;
    while(data->map.map[row])
    {
        while(data->map.map[row][col])
        {
            if(data->map.map[row][col] == 'C')
                coins++;
            col++;
        }
        row++;
        col = 0;
    }
    return (coins);
}