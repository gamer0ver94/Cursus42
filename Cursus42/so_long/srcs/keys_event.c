/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_event.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:13 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/29 05:09:48 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	controls(int key, t_data *data)
{
	printf("%d\n",key);
	if (key == ESC)
	{
		exit(0);
	}
	if ((key == W || key == S || key == A || key == D) && (data->menu.status == SELECTED))
	{
		data->player.score++;
		finish_game(data, key);
		player_move(data, key);
	}
	//menu options keys
	if(key == S && data->menu.status == WAIT)
	{
		if(data->menu.mp == ON)
		{
			data->menu.img.start = mlx_xpm_file_to_image(data->mlx,BGQUIT,&data->menu.img.height, &data->menu.img.width);
			data->menu.status = ON;
			data->menu.quit = ON;
			data->menu.mp = OFF;
		}
		if(data->menu.sp == ON)
		{
			data->menu.img.start = mlx_xpm_file_to_image(data->mlx,BGMP,&data->menu.img.height, &data->menu.img.width);
			data->menu.status = ON;
			data->menu.mp = ON;
			data->menu.sp = OFF;
		}
	}
	if(key == W && data->menu.status == 2)
	{
		if(data->menu.mp == ON)
		{
			data->menu.img.start = mlx_xpm_file_to_image(data->mlx,BGSP,&data->menu.img.height, &data->menu.img.width);
			data->menu.status = ON;
			data->menu.sp = ON;
			data->menu.mp = OFF;
		}
		if(data->menu.quit == ON)
		{
			data->menu.img.start = mlx_xpm_file_to_image(data->mlx,BGMP,&data->menu.img.height, &data->menu.img.width);
			data->menu.status = ON;
			data->menu.mp = ON;
			data->menu.quit = OFF;
		}
	}
	if (key == ENTER)
	{
		if (data->menu.sp == ON && data->menu.status == WAIT)
		{
			data->menu.status = SELECTED;
			mlx_clear_window(data->mlx, data->window.start);
		}
		if (data->menu.mp == ON && data ->menu.status == WAIT)
		{
			data->player2.score++;
			data->map.map[data->player.row][data->player.col - 1] = 'L';
			player2_position(data);
			data->menu.status = SELECTED;
		}
	}
	if (key == R)
	{
		free(data->map.map);
		read_map(data, data->map.path);
		player_position(data);
		if (check_enemy(data) == 0)
			enemy_position(data); //check enemy
		data->coin.amount = count_coins(data);
	}
	if (data->menu.mp == ON && data->menu.status == SELECTED)
	{
		finish_game(data, key);
		player2_move(data, key);
	}
	return (0);
}

void	keys_event(t_data *data)
{
	mlx_hook(data->window.start, 2, 1L << 0, controls, data);
	mlx_loop_hook(data->mlx, graphics_render, data);
	mlx_loop(data->mlx);
}
