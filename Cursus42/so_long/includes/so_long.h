/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:47:33 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/29 05:24:13 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <mlx.h>
# include "../libft/libft.h"
# include "get_next_line.h"
# include "structs.h"
# include <stdlib.h>
# include <stdio.h>
// # include <stddef.h>
// # include <sys/types.h>
// # include <sys/stat.h>
// # include <fcntl.h>
// #include <X11/keysym.h>
// # include <X11/X.h>
// # include <sys/stat.h>
# include <fcntl.h>
# define WALL "assets/wall.xpm"
# define FLOOR "assets/floor.xpm"
# define PLAYER "assets/player.xpm"
# define COIN "assets/coin.xpm"
# define ENEMY "assets/enemy.xpm"
# define EXIT1 "assets/exit1.xpm"
# define EXIT2 "assets/exit2.xpm"
# define GAME_MENU "assets/game_menu.xpm"
# define EFFECT_1 "assets/effect_1.xpm"
# define EFFECT_2 "assets/effect_2.xpm"
# define BGSP "assets/bg_menu_sp.xpm"
# define BGMP "assets/bg_menu_mp.xpm"
# define BGQUIT "assets/bg_menu_quit.xpm"
# define IMG_SIZE 80
# define ON  1
# define OFF  0
# define WAIT  2
# define ENTER 65293
# define SELECTED 3
// linux
#define W 119
#define S 115
#define D 100
#define A 97
#define ESC 65307
#define R 114
#define ENEMY_SPEED 50
#define UP 65362
#define DOWN 65364
#define LEFT 65361
#define RIGHT 65363
//mac
// # define W 13
// # define S 1
// # define D 2
// # define A 0
// # define ESC 53
// # define R 15
// # define L 37
// # define ENEMY_SPEED 5

void	s_initialization(t_data *data);
void	read_map(t_data *data, char *argv);
void	new_window(t_data *data);
void	debugger(t_data *data);
void	keys_event(t_data *data);
void	player_move(t_data *data, int key);
void	player_position(t_data *data);
void	enemy_position(t_data *data);
int		graphics_render(t_data *data);
int		enemy_moves(t_data *data);
int		count_coins(t_data *data);
void	exit_position(t_data *data);
void	finish_game(t_data *data, int key);
int		check_enemy(t_data *data);
//player 2 test
void	player2_move(t_data *data, int key);
void	player2_position(t_data *data);
#endif
