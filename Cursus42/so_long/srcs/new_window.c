/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_window.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 23:47:05 by dpaulino          #+#    #+#             */
/*   Updated: 2022/05/26 18:33:29 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	new_window(t_data *data)
{
	data->window.width = data->map.width * IMG_SIZE;
	data->window.height = data->map.height * IMG_SIZE;
	data->window.start = mlx_new_window(data->mlx, data->window.width, data->window.height, "Game");
}
