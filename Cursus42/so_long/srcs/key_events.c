#include "../includes/so_long.h"



int controls(int button, t_data *data)
{
    if(button == XK_Escape)
    {
      // mlx_destroy_display(data->mlx);
      mlx_destroy_image(data->mlx,data->image.wall);
      mlx_destroy_display(data->mlx);
      mlx_destroy_window(data->mlx, data->window.init);
      data->window.init = NULL;
    }
    return (0);
}

int   key_events(t_data *data)
{
    mlx_hook(data->window.init,2,1L<<0,controls, &data);
    
   return (0);
}