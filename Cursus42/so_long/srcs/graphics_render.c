/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics_render.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:07:01 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/05/26 19:02:18 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	map_constructor(t_data *data, int row, int col)
{
	if (data->map.map[row][col] == '1')
	{
		mlx_put_image_to_window(data->mlx, data->window.start, data->wall.img.start, col * IMG_SIZE, row * IMG_SIZE);
	}
	if (data->map.map[row][col] == '0')
	{
		mlx_put_image_to_window(data->mlx, data->window.start, data->floor.img.start, col * IMG_SIZE , row * IMG_SIZE);
	}
	if (data->map.map[row][col] == 'P')
	{
		mlx_put_image_to_window(data->mlx, data->window.start, data->player.img.start, col * IMG_SIZE, row * IMG_SIZE);   
	}
	if (data->map.map[row][col] == 'C')
	{
		mlx_put_image_to_window(data->mlx, data->window.start, data->coin.img.start, col * IMG_SIZE, row * IMG_SIZE);
	}
	if (data->map.map[row][col] == 'M')
	{
		mlx_put_image_to_window(data->mlx,data->window.start, data->enemy.img.start, col * IMG_SIZE, row * IMG_SIZE);
	}
	if (data->map.map[row][col] == 'E')
	{
		mlx_put_image_to_window(data->mlx, data->window.start, data->exit.img.start, col * IMG_SIZE, row * IMG_SIZE);
	}
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

	time = time_out(time, data);
	row = 0;
	col = 0;
	while (data->map.map[row])
	{
		if (data->map.map[row][col])
		{
			map_constructor(data, row, col);
			col++;
		}
		else
		{
			row++;
			col = 0;
		}
	}
	if (data->player.row == data->enemy.row
		&& data->player.col == data->enemy.col)
	{
		printf("GAME OVER\n");
		exit(0);
	}
	return (0);
}
