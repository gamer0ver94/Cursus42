/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player2_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 23:45:35 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/06/12 23:45:36 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	walk_on_coins2(t_data *data, int key, int row, int col)
{
	if (key == UP)
	{
		data->map.map[row][col] = '0';
		data->map.map[row - 1][col] = 'L';
	}
	if (key == DOWN)
	{
		data->map.map[row][col] = '0';
		data->map.map[row + 1][col] = 'L';
	}
	if (key == LEFT)
	{
		data->map.map[row][col] = '0';
		data->map.map[row][col - 1] = 'L';
	}
	if (key == RIGHT)
	{
		data->map.map[row][col] = '0';
		data->map.map[row][col + 1] = 'L';
	}
	data->player2.score++;
	data->coin.amount--;
}

void	walk_on_floor2(t_data *data, int key, int row, int col)
{
	if (key == UP)
	{
		data->map.map[row][col] = '0';
		data->map.map[row - 1][col] = 'L';
	}
	if (key == DOWN)
	{
		data->map.map[row][col] = '0';
		data->map.map[row + 1][col] = 'L';
	}
	if (key == LEFT)
	{
		data->map.map[row][col] = '0';
		data->map.map[row][col - 1] = 'L';
	}
	if (key == RIGHT)
	{
		data->map.map[row][col] = '0';
		data->map.map[row][col + 1] = 'L';
	}
}

void	move_direction2(t_data *data, int key, int row, int col)
{
	if (key == UP)
	{
		if (data->map.map[row - 1][col] == '0')
			walk_on_floor2(data, key, row, col);
		if (data->map.map[row - 1][col] == 'C')
			walk_on_coins2(data, key, row, col);
	}
	if (key == DOWN)
	{
		if (data->map.map[row + 1][col] == '0')
			walk_on_floor2(data, key, row, col);
		if (data->map.map[row + 1][col] == 'C')
			walk_on_coins2(data, key, row, col);
	}
}

void	player2_move(t_data *data, int key)
{
	int	row;
	int	col;

	row = data->player2.row;
	col = data->player2.col;
	move_direction2(data, key, row, col);
	if (key == LEFT)
	{
		if (data->map.map[row][col - 1] == '0')
			walk_on_floor2(data, key, row, col);
		if (data->map.map[row][col - 1] == 'C')
			walk_on_coins2(data, key, row, col);
	}
	if (key == RIGHT)
	{
		if (data->map.map[row][col + 1] == '0')
			walk_on_floor2(data, key, row, col);
		if (data->map.map[row][col + 1] == 'C')
			walk_on_coins2(data, key, row, col);
	}
	exit_position(data);
	player2_position(data);
	// debugger(data);
}
