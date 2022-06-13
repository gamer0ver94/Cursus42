/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:20:52 by dpaulino          #+#    #+#             */
/*   Updated: 2022/06/13 15:07:58 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	enemy_move_up(t_data	*data)
{
	if (data->map.map[data->enemy.row - 1][data->enemy.col] != '1'
		&& data->map.map[data->enemy.row - 1][data->enemy.col] != 'C')
	{
		if (data->enemy.row > data->player.row)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row -1][data->enemy.col] = 'M';
			data->enemy.row --;
			data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,
					P2DOWN, &data->enemy.img.width, &data->enemy.img.height);
		}
	}
	return (0);
}

int	enemy_move_down(t_data	*data)
{
	if (data->map.map[data->enemy.row + 1][data->enemy.col] != '1'
			&& data->map.map[data->enemy.row + 1][data->enemy.col] != 'C')
	{
		if (data->enemy.row < data->enemy.col)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row + 1][data->enemy.col] = 'M';
			data->enemy.row ++;
			data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,
					P2UP, &data->enemy.img.width, &data->enemy.img.height);
		}
	}
	return (0);
}

int	enemy_move_left(t_data	*data)
{
	if (data->map.map[data->enemy.row][data->enemy.col - 1] != '1'
		&& data->map.map[data->enemy.row][data->enemy.col - 1] != 'C')
	{
		if (data->enemy.col > data->player.col)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row][data->enemy.col - 1] = 'M';
			data->enemy.col--;
			data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,
					P2LEFT, &data->enemy.img.width, &data->enemy.img.height);
		}
	}
	return (0);
}

int	enemy_move_right(t_data	*data)
{
	if (data->map.map[data->enemy.row][data->enemy.col + 1] != '1'
		&& data->map.map[data->enemy.row][data->enemy.col + 1] != 'C')
	{
		if (data->enemy.col < data->player.col)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row][data->enemy.col + 1] = 'M';
			data->enemy.col++;
			data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,
					P2RIGHT, &data->enemy.img.width, &data->enemy.img.height);
		}
	}
	return (0);
}

int	enemy_moves(t_data *data)
{
	if (data->enemy.row != data->player.row
		|| data->enemy.col != data->player.col)
	{
		if (data->enemy.row - data->player.row > \
			data->enemy.col - data->player.col)
		{
			if (data->enemy.col > data->player.col)
				enemy_move_left(data);
			if (data->enemy.col < data->player.col)
				enemy_move_right(data);
			return (0);
		}
		if (data->enemy.row - data->player.row < \
			data->enemy.col - data->player.col)
		{
			if (data->enemy.col < data->player.col)
				enemy_move_down(data);
			if(data->enemy.col > data->player.col)
				enemy_move_up(data);
		}
		return (0);
	}
	enemy_position(data);
	return (0);
}

