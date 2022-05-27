/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:20:52 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/27 03:48:25 by dpaulino         ###   ########.fr       */
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
		}
	}
	return (0);
}
int on_and_off()
{
	static int x;

	x++;
	if(x == 2)
	{
		x = 0;
		return(1);
	}
	return (0);
}

int	enemy_moves(t_data *data)
{
	int res;

	res = on_and_off();
	if (data->enemy.row != data->player.row
		|| data->enemy.col != data->player.col)
	{
		if(res == 0)
		{
			enemy_move_row(data);
		}
		if(res == 1)
			enemy_move_col(data);
	}
	enemy_position(data);
	return (0);
}
