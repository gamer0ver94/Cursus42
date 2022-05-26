/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:46:50 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/26 18:33:57 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	player_position(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (data->map.map[y])
	{
		while (data->map.map[y][x])
		{
			if (data->map.map[y][x] == 'P')
			{
				data->player.row = y;
				data->player.col = x;
			}
			x++;
		}
		x = 0;
		y++;
	}
}