/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_enemy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:58:05 by dpaulino          #+#    #+#             */
/*   Updated: 2022/06/14 22:56:43 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_enemy(t_data *data)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (data->map.map[y])
	{
		while (data->map.map[y][x])
		{
			if (data->map.map[y][x] == 'M')
			{
				return (0);
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (1);
}
