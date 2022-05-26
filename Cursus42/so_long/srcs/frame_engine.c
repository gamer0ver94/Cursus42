/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_engine.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:24:26 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/26 18:26:07 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
// void    finish_game(t_data *data, int row, int col)
// {

// }

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
	printf("%d\n", data->player.score);
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

void	frame_engine(t_data *data, int key)
{
	int	row;
	int	col;

	row = data->player.row;
	col = data->player.col;
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
	if (key == A)
	{
		if (data->map.map[row][col - 1] == '0')
			walk_on_floor(data, key, row, col);
		if (data->map.map[row][col - 1] == 'C')
			walk_on_floor(data, key, row, col);
	}
	if (key == D)
	{
		if (data->map.map[row][col + 1] == '0')
			walk_on_floor(data, key, row, col);
		if (data->map.map[row][col + 1] == 'C')
			walk_on_floor(data, key, row, col);
	}
	player_position(data);
	debugger(data);
}
