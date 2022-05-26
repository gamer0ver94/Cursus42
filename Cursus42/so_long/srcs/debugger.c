#include "../includes/so_long.h"

void debugger(t_data    *data)
{
    int row;
    int col;

    row = 0;
    col = 0;
    while (data->map.map[row])
    {
        while(data->map.map[row][col])
        {
            printf("%c",data->map.map[row][col]);
            col++;
        }
        col = 0;
        row++;
        printf("\n");
    }
    printf("\n\n\n");
}