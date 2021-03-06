/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics_render.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:07:01 by gameoversta       #+#    #+#             */
/*   Updated: 2022/06/16 14:33:20 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	map_constructor(t_data *data, int row, int col)
{
	if (data->menu.status == ON)
	{
		mlx_put_image_to_window(data->mlx, data->window.start,
			data->menu.img.start, 0, 0);
		data->menu.status = WAIT;
	}
	if (data->menu.status == SELECTED)
		map_update(data, row, col);
}

int	time_out(int time, t_data *data)
{
	time++;
	if (time == ENEMY_SPEED)
	{
		enemy_moves(data);
		time = 0;
	}
	return (time);
}

int	graphics_render(t_data *data)
{
	int			row;
	int			col;
	static int	time;

	row = 0;
	col = 0;
	if (check_enemy(data) == 0 && data->menu.status == SELECTED)
		time = time_out(time, data);
	while (data->map.map[row])
	{
		while (data->map.map[row][col])
		{
			map_constructor(data, row, col);
			col++;
		}
			row++;
			col = 0;
	}
	if (data->player.row == data->enemy.row
		&& data->player.col == data->enemy.col)
	{
		ft_putstr_fd("GAME OVER\nYOU LOST\n", 1);
		exit(0);
	}
	return (0);
}
