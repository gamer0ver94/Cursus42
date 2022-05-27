/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:25:03 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/27 17:30:44 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_img
{
	void	*start;
	int		width;
	int		height;
}	t_img;

typedef struct s_asset
{
	t_img	img;
	int		row;
	int		col;
	int		amount;
}	t_asset;

typedef struct s_window
{
	void	*start;
	int		width;
	int		height;
	char	*title;
}	t_window;

typedef struct s_map
{
	char	**map;
	char	*path;
	int		width;
	int		height;

}	t_map;

typedef struct s_player
{
	t_img	img;
	int		score;
	int		row;
	int		col;
}	t_player;

typedef struct s_enemy
{
	t_img	img;
	int		row;
	int		col;
}	t_enemy;

typedef struct s_data
{
	void		*mlx;
	t_window	window;
	t_map		map;
	t_player	player;
	t_asset		wall;
	t_asset		floor;
	t_asset		coin;
	t_asset		exit;
	t_asset		game_menu;
	t_enemy		enemy;
}	t_data;
#endif