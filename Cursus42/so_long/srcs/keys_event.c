/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_events.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:13 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/23 23:46:59 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"



int controls(int key, t_data *data)
{
  
  if(key == XK_Escape)
  {
    mlx_destroy_display(data->mlx);
    mlx_destroy_window(data->mlx, data->window.start);
  }
  if(key == W ||key == S ||key == A ||key == D)
  {
    data->player.score++;
    printf("%d\n",data->player.score);
    frame_engine(data, key);
  }
  if(key == 108)
  {
    debugger(data);
  }
  if(key == 114)
  {
    free(data->map.map);
    read_map(data,data->map.path);
    player_position(data);
    enemy_position(data);
  }
  return (0);
}

void   keys_event(t_data *data)
{
  mlx_hook(data->window.start,2,1L<<0,controls, data);
  mlx_loop_hook(data->mlx,graphics_render,data);
  mlx_loop(data->mlx);
}