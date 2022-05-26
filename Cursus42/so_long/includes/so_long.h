/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:47:33 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/26 20:09:48 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
#endif
#include <mlx.h>
#include "../libft/libft.h"
#include "get_next_line.h"
#include "structs.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
// #include <X11/keysym.h>
// # include <X11/X.h>
#include <sys/stat.h>
#include <fcntl.h>
#define WALL "assets/wall.xpm"
#define FLOOR "assets/floor.xpm"
#define PLAYER "assets/player.xpm"
#define COIN "assets/coin.xpm"
#define ENEMY "assets/enemy.xpm"
#define EXIT1 "assets/exit1.xpm"
#define EXIT2 "assets/exit2.xpm"
#define GAME_MENU "assets/game_menu.xpm"
#define IMG_SIZE 100
//linux
// #define W 119
// #define S 115
// #define D 100
// #define A 97
// #define ESC 27
// #define ENEMY_SPEED 150
//mac
#define W 13
#define S 1
#define D 2
#define A 0
#define ESC 53
#define R 15
#define L 37
#define ENEMY_SPEED 30

void	s_initialization(t_data *data, char *argv);
void	read_map(t_data *data, char *argv);
void	new_window(t_data *data);
void	debugger(t_data    *data);
void	keys_event(t_data *data);
void	frame_engine(t_data *data, int key);
void	player_position(t_data *data);
void    enemy_position(t_data *data);
int		graphics_render(t_data *data);
int	enemy_moves(t_data *data);
