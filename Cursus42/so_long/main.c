#include "includes/so_long.h"

int main(int argc, char **argv)
{
    t_data data;

    data.image.width = IMG_SIZE;
    data.image.height = IMG_SIZE * 0;
    data.map.path = "maps/map1.ber";
    
    if(argc != 2)
    {
        
        printf("This Program need at least one argument\n");
        return (0);
    }
    if(argv[1])
    {
        read_map(&data);
        create_new_window(&data);
        key_events(&data);
        map_rendering(&data);
    }
    return(0);
}