/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:31 by dpaulino          #+#    #+#             */
/*   Updated: 2022/06/16 02:11:22 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
		check_errors(2);
	if (argv[1])
	{
		data.map.path = argv[1];
		read_map(&data, argv[1]);
		check_map(&data);
		if (check_player(&data) == 1)
			check_errors(1);
		s_initialization(&data);
		data.coin.amount = count_coins(&data);
		player_position(&data);
		if (check_enemy(&data) == 0)
			enemy_position(&data);
		new_window(&data);
		graphics_render(&data);
		keys_event(&data);
	}
	return (0);
}
