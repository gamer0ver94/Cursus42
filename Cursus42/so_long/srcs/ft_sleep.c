/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:32:01 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/06/13 13:48:05 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	ft_sleep(void)
{
	static int	x;

	x++;
	if (x == 1)
	{
		return (1);
	}
	// if (x == 2)
	// {
	// 	return (2);
	// }

	// if (x == 3)
	// {
	// 	return (3);
	// }
	x = 0;
	return (0);
}
