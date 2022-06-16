/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:11:06 by dpaulino          #+#    #+#             */
/*   Updated: 2022/06/16 17:33:54 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(int argc, char **argv)
{
	t_list pile_a;
	if (argc == 2)
	{
		return (1);
	}
	while(*argv)
	{
		pile_a.content = argv[1];
		*argv++;
	}
	return (0);
}
