/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_initialization.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:37 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/26 19:03:10 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
//initialize struct values
void s_initialization(t_data *data, char *argv)
{
	data->map.path = argv;
	data->mlx = mlx_init();
	data->wall.img.start = mlx_xpm_file_to_image(data->mlx,WALL,&data->wall.img.width,&data->wall.img.height);
	data->player.img.start = mlx_xpm_file_to_image(data->mlx,PLAYER,&data->player.img.width,&data->player.img.height);
	data->floor.img.start = mlx_xpm_file_to_image(data->mlx,FLOOR,&data->floor.img.width,&data->floor.img.height);
	data->coin.img.start = mlx_xpm_file_to_image(data->mlx,COIN,&data->coin.img.width,&data->coin.img.height);
	data->enemy.img.start = mlx_xpm_file_to_image(data->mlx,ENEMY,&data->enemy.img.width,&data->enemy.img.height);
	data->exit.img.start = mlx_xpm_file_to_image(data->mlx,EXIT1,&data->exit.img.width,&data->exit.img.height);
	data->game_menu.img.start = mlx_xpm_file_to_image(data->mlx,GAME_MENU,&data->game_menu.img.width,&data->game_menu.img.height);
	data->player.score = 0;
	// data->wall.img.width = IMG_SIZE;
	// data->wall.img.height = IMG_SIZE;
	// data->floor.img.width = IMG_SIZE;
	// data->floor.img.height = IMG_SIZE;
	// data->player.img.width = IMG_SIZE;
	// data->player.img.height = IMG_SIZE;
	// data->coin.img.path = COIN;
	// data->exit.img.path = EXIT;
	// data->enemy.img.path = ENEMY;
}