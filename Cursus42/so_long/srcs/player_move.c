/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:24:26 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/29 04:05:43 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	walk_on_coins(t_data *data, int key, int row, int col)
{
	if (key == W)
	{
		data->map.map[row][col] = '0';
		data->map.map[row - 1][col] = 'P';
	}
	if (key == S)
	{
		data->map.map[row][col] = '0';
		data->map.map[row + 1][col] = 'P';
	}
	if (key == A)
	{
		data->map.map[row][col] = '0';
		data->map.map[row][col - 1] = 'P';
	}
	if (key == D)
	{
		data->map.map[row][col] = '0';
		data->map.map[row][col + 1] = 'P';
	}
	data->player.score++;
	data->coin.amount--;
}

void	walk_on_floor(t_data *data, int key, int row, int col)
{
	if (key == W)
	{
		data->map.map[row][col] = '0';
		data->map.map[row - 1][col] = 'P';
	}
	if (key == S)
	{
		data->map.map[row][col] = '0';
		data->map.map[row + 1][col] = 'P';
	}
	if (key == A)
	{
		data->map.map[row][col] = '0';
		data->map.map[row][col - 1] = 'P';
	}
	if (key == D)
	{
		data->map.map[row][col] = '0';
		data->map.map[row][col + 1] = 'P';
	}
}

void	move_direction(t_data *data, int key, int row, int col)
{
	if (key == W)
	{
		if (data->map.map[row - 1][col] == '0')
			walk_on_floor(data, key, row, col);
		if (data->map.map[row - 1][col] == 'C')
			walk_on_coins(data, key, row, col);
	}
	if (key == S)
	{
		if (data->map.map[row + 1][col] == '0')
			walk_on_floor(data, key, row, col);
		if (data->map.map[row + 1][col] == 'C')
			walk_on_coins(data, key, row, col);
	}
}

void	player_move(t_data *data, int key)
{
	int	row;
	int	col;

	row = data->player.row;
	col = data->player.col;
	move_direction(data, key, row, col);
	if (key == A)
	{
		if (data->map.map[row][col - 1] == '0')
			walk_on_floor(data, key, row, col);
		if (data->map.map[row][col - 1] == 'C')
			walk_on_coins(data, key, row, col);
	}
	if (key == D)
	{
		if (data->map.map[row][col + 1] == '0')
			walk_on_floor(data, key, row, col);
		if (data->map.map[row][col + 1] == 'C')
			walk_on_coins(data, key, row, col);
	}
	exit_position(data);
	player_position(data);
	// debugger(data);
}
