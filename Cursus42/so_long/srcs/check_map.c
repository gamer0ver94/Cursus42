/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:26:23 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/06/16 10:37:54 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_map(t_data *data)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (data->map.map[row])
	{
		while (data->map.map[row][col])
		{
			if (data->map.map[0][col] != '1'
				|| data->map.map[row][0] != '1'
				|| data->map.map[row][data->map.width - 1] != '1'
				|| data->map.map[data->map.height - 1][col] != '1')
				check_errors(4);
			col++;
		}
		col = 0;
		row++;
	}
	debugger(data);
	return (0);
}
