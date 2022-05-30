/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:20:52 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/30 03:25:22 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	enemy_move_col(t_data	*data)
{
	if (data->map.map[data->enemy.row - 1][data->enemy.col] != '1'
		&& data->map.map[data->enemy.row - 1][data->enemy.col] != 'C')
	{
		if (data->enemy.row > data->player.row)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row -1][data->enemy.col] = 'M';
			data->enemy.row --;
			data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,"assets/char2_back.xpm",&data->enemy.img.width,&data->enemy.img.height);
			return (0);
		}
	}
	if (data->map.map[data->enemy.row + 1][data->enemy.col] != '1'
			&& data->map.map[data->enemy.row + 1][data->enemy.col] != 'C')
	{
		if (data->enemy.row < data->enemy.col)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row + 1][data->enemy.col] = 'M';
			data->enemy.row ++;
			data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,"assets/char2_front.xpm",&data->enemy.img.width,&data->enemy.img.height);
		}
	}
	return (0);
}

int	enemy_move_row(t_data	*data)
{
	if (data->map.map[data->enemy.row][data->enemy.col + 1] != '1'
		&& data->map.map[data->enemy.row][data->enemy.col + 1] != 'C')
	{
		if (data->enemy.col < data->player.col)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row][data->enemy.col + 1] = 'M';
			data->enemy.col++;
			data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,"assets/char2_right.xpm",&data->enemy.img.width,&data->enemy.img.height);
			return (0);
		}
	}
	if (data->map.map[data->enemy.row][data->enemy.col - 1] != '1'
		&& data->map.map[data->enemy.row][data->enemy.col - 1] != 'C')
	{
		if (data->enemy.col > data->player.col)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row][data->enemy.col - 1] = 'M';
			data->enemy.col--;
			data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,"assets/char2_left.xpm",&data->enemy.img.width,&data->enemy.img.height);
		}
	}
	return (0);
}

int	on_and_off(void)
{
	static int	x;

	x++;
	if (x == 2)
	{
		x = 0;
		return (1);
	}
	return (0);
}

int	enemy_moves(t_data *data)
{
	int	res;

	res = on_and_off();
	if (data->enemy.row != data->player.row
		|| data->enemy.col != data->player.col)
	{
		if (res == 0)
		{
			enemy_move_row(data);
		}
		if (res == 1)
			enemy_move_col(data);
	}
	enemy_position(data);
	return (0);
}
