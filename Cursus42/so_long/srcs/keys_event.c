/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_event.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:13 by dpaulino          #+#    #+#             */
/*   Updated: 2022/06/13 00:33:04 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	player_control(t_data *data, int key)
{
	if ((key == W || key == S || key == A || key == D)
		&& (data->menu.status == SELECTED))
	{
		data->player.score++;
		finish_game(data, key);
		player_move(data, key);
		mlx_put_image_to_window(data->mlx, data->window.start,
			data->player.score_table.start, 75, 90);
		mlx_string_put(data->mlx, data->window.start, 80, 105,
			3093151, "SCORE : ");
		mlx_string_put(data->mlx, data->window.start, 130, 105, 3093151,
			ft_itoa(data->player.score));
	}
}

int	controls(int key, t_data *data)
{
	menu_update(data, key);
	player_control(data, key);
	if (key == ESC)
		exit(0);

	if (key == R)
	{
		free(data->map.map);
		read_map(data, data->map.path);
		player_position(data);
		if (check_enemy(data) == 0)
			enemy_position(data);
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
