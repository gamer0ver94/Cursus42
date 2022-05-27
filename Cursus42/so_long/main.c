/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:31 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/27 18:25:55 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
	{
		printf("This Program need exactly one argument\n");
		return (0);
	}
	if (argv[1])
	{
		s_initialization(&data, argv[1]);
		read_map(&data, argv[1]);
		data.coin.amount = count_coins(&data);
		debugger(&data);
		player_position(&data);
		if (check_enemy(&data) == 0)
			enemy_position(&data);
		new_window(&data);
		// graphics_render(&data);
		keys_event(&data);
	}
	return (0);
}
