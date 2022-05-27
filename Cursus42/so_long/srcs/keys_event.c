/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_event.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:13 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/27 03:59:45 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	controls(int key, t_data *data)
{
	if (key == ESC)
	{
		mlx_destroy_window(data->mlx, data->window.start);
	}
	if (key == W ||key == S ||key == A ||key == D)
	{
		data->player.score++;
		finish_game(data, key);
		player_move(data, key);
	}
	if (key == 108)
	{
		debugger(data);
	}
	if (key == R)
	{
		free(data->map.map);
		read_map(data,data->map.path);
		player_position(data);
		enemy_position(data);
		data->coin.amount = count_coins(data);
	}
	return (0);
}

void	keys_event(t_data *data)
{
	mlx_hook(data->window.start, 2, 1L << 0, controls, data);
	mlx_loop_hook(data->mlx, graphics_render, data);
	mlx_loop(data->mlx);
}
