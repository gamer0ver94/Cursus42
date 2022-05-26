/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debugger.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:17:57 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/26 18:20:45 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	debugger(t_data	*data)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (data->map.map[row])
	{
		while (data->map.map[row][col])
		{
			printf("%c", data->map.map[row][col]);
			col++;
		}
		col = 0;
		row++;
		printf("\n");
	}
	printf("\n\n\n");
}