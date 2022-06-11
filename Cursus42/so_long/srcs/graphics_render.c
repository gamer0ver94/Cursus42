/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics_render.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:07:01 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/06/11 18:24:52 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	map_constructor(t_data *data, int row, int col)
{
	if(data->menu.status == ON)
	{
		mlx_put_image_to_window(data->mlx, data->window.start,data->menu.img.start, 0,0);
		data->menu.status = WAIT;
	}
	if(data->menu.status == SELECTED)
	{
		
		if (data->map.map[row][col] == '1')
		{
			mlx_put_image_to_window(data->mlx, data->window.start,
				data->wall.img.start, (1920 / 2) - ((data->map.width / 2) * IMG_SIZE) + (IMG_SIZE * col) ,(1080 / 2) - ((data->map.height / 2) * IMG_SIZE) + (row * IMG_SIZE));
		}
			
		if (data->map.map[row][col] == '0')
			mlx_put_image_to_window(data->mlx, data->window.start,
				data->floor.img.start,(1920 / 2) - ((data->map.width / 2) * IMG_SIZE) + (IMG_SIZE * col) ,(1080 / 2) - ((data->map.height / 2) * IMG_SIZE) + (row * IMG_SIZE));
		if (data->map.map[row][col] == 'P')
			mlx_put_image_to_window(data->mlx, data->window.start,
				data->player.img.start, (1920 / 2) - ((data->map.width / 2) * IMG_SIZE) + (IMG_SIZE * col) ,(1080 / 2) - ((data->map.height / 2) * IMG_SIZE) + (row * IMG_SIZE));
		if (data->map.map[row][col] == 'C')
			mlx_put_image_to_window(data->mlx, data->window.start,
				data->coin.img.start,(1920 / 2) - ((data->map.width / 2) * IMG_SIZE) + (IMG_SIZE * col) ,(1080 / 2) - ((data->map.height / 2) * IMG_SIZE) + (row * IMG_SIZE));
		if (data->map.map[row][col] == 'M')
			mlx_put_image_to_window(data->mlx, data->window.start,
				data->enemy.img.start,(1920 / 2) - ((data->map.width / 2) * IMG_SIZE) + (IMG_SIZE * col) ,(1080 / 2) - ((data->map.height / 2) * IMG_SIZE) + (row * IMG_SIZE));
		if (data->map.map[row][col] == 'E')
			mlx_put_image_to_window(data->mlx, data->window.start,
				data->exit.img.start,(1920 / 2) - ((data->map.width / 2) * IMG_SIZE) + (IMG_SIZE * col) ,(1080 / 2) - ((data->map.height / 2) * IMG_SIZE) + (row * IMG_SIZE));
		if(data->map.map[row][col] == 'L')
			mlx_put_image_to_window(data->mlx, data->window.start,
				data->player2.img.start, (1920 / 2) - ((data->map.width / 2) * IMG_SIZE) + (IMG_SIZE * col) ,(1080 / 2) - ((data->map.height / 2) * IMG_SIZE) + (row * IMG_SIZE));
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

	row = 0;
	col = 0;
	if (check_enemy(data) == 0 && data->menu.status == SELECTED)
		time = time_out(time, data);	//check enemy
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
	
	if (data->player.row == data->enemy.row //check position
		&& data->player.col == data->enemy.col)
	{
		printf("GAME OVER\n");
		exit(0);
	}
	return (0);
}
