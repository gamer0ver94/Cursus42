/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_initialization.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:37 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/29 22:48:08 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
//initialize struct values
void	s_initialization(t_data *data)
{
	data->mlx = mlx_init();
	data->menu.img.start = mlx_xpm_file_to_image(data->mlx,BGSP,&data->menu.img.height, &data->menu.img.width);
	data->menu.status = ON;
	data->menu.sp = ON;
	data->menu.mp = OFF;
	data->menu.quit = OFF;
	data->wall.img.start = mlx_xpm_file_to_image(data->mlx, WALL,
			&data->wall.img.width, &data->wall.img.height);
	data->player.img.start = mlx_xpm_file_to_image(data->mlx, PLAYER,
			&data->player.img.width, &data->player.img.height);
	data->floor.img.start = mlx_xpm_file_to_image(data->mlx, FLOOR,
			&data->floor.img.width, &data->floor.img.height);
	data->coin.img.start = mlx_xpm_file_to_image(data->mlx, COIN,
			&data->coin.img.width, &data->coin.img.height);
	data->effect_1.img.start = mlx_xpm_file_to_image(data->mlx, EFFECT_1,
			&data->effect_1.img.width, &data->effect_1.img.height);
	data->effect_2.img.start = mlx_xpm_file_to_image(data->mlx, EFFECT_2,
			&data->effect_2.img.width, &data->effect_2.img.height);
	if (check_enemy(data) == 0)
		data->enemy.img.start = mlx_xpm_file_to_image(data->mlx, ENEMY,
				&data->enemy.img.width, &data->enemy.img.height);
	else
		printf("THERE IS NO ENEMIES");
	data->exit.img.start = mlx_xpm_file_to_image(data->mlx, EXIT1,
			&data->exit.img.width, &data->exit.img.height);
	data->game_menu.img.start = mlx_xpm_file_to_image(data->mlx, GAME_MENU,
			&data->game_menu.img.width, &data->game_menu.img.height);
	data->player.score = 0;
}
