/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:20:52 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/26 21:03:05 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	enemy_move_col(t_data	*data)
{
	if (data->map.map[data->enemy.row - 1][data->enemy.col] != '1')
	{
		if (data->enemy.row > data->player.row)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row -1][data->enemy.col] = 'M';
			data->enemy.row --;
			return (0);
		}
	}
	if (data->map.map[data->enemy.row + 1][data->enemy.col] != '1')
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

int	enemy_move_row(t_data	*data , int a)
{
	a *= -1;
	printf("%d\n",a);
	if (data->map.map[data->enemy.row][data->enemy.col + 1] != '1')
	{
		if (data->enemy.col < data->player.col)
		{
			data->map.map[data->enemy.row][data->enemy.col] = '0';
			data->map.map[data->enemy.row][data->enemy.col + 1] = 'M';
			data->enemy.col++;
			return (0);
		}
	}
	if (data->map.map[data->enemy.row][data->enemy.col - 1] != '1')
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

int	enemy_moves(t_data *data)
{
	static int a;
	a = -1;
	//create a static char that changed from 1 and 0 everytime it is executed making randow move straight or sides
	if (data->enemy.row != data->player.row
		|| data->enemy.col != data->player.col)
	{
		if (data->enemy.row == data->player.row
			&& (data->map.map[data->enemy.row][data->enemy.col + 1] != '1'
				&& data->map.map[data->enemy.row][data->enemy.col - 1] != '1'))
		{
			a = enemy_move_row(data, a);
			return (0);
		}
		enemy_move_col(data);
	}
	enemy_position(data);
	return (0);
}
