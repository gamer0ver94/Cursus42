/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_coins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:49:14 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/27 16:49:51 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	count_coins(t_data	*data)
{
	int	coins;
	int	row;
	int	col;

	coins = 0;
	row = 0;
	col = 0;
	while (data->map.map[row])
	{
		while (data->map.map[row][col])
		{
			if (data->map.map[row][col] == 'C')
				coins++;
			col++;
		}
		row++;
		col = 0;
	}
	return (coins);
}
