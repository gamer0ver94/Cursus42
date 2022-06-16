/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 02:01:18 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/06/16 10:38:01 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_errors(int error)
{
	if (error == 1)
	{
		ft_putstr_fd("ERROR : Map have NONE or more than one PLAYER\n", 1);
		exit(1);
	}
	if (error == 2)
	{
		ft_putstr_fd("ERROR : This program need exactly ONE ARGUMENT\n", 1);
		exit(2);
	}
	if (error == 3)
	{
		ft_putstr_fd("ERROR : This map is NOT VALID\n", 1);
		exit(3);
	}
	if (error == 4)
	{
		ft_putstr_fd("ERROR : map not closed with walls\n", 1);
		exit(4);
	}
}
