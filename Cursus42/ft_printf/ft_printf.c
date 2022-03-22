/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:16:45 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/20 14:16:45 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	argformat(char str, va_list pa)
{
	int lenght;

	lenght = 0;
	if (str == 'c')
	{
		ft_putchar_fd('i',1);
	}
	// if (str == 's')
	// {
	// 	char a = va_arg(args, char);
	// 	ft_putstr_fd(&a, 1);
	// }
	// if (str == 'p')
	// {

	// }
	// if (str == 'd')

	// if (str == 'i')

	// if (str == 'u')

	// if (str == 'x')

	// if (str == 'X')

	// if (str == '%')

	return (lenght);
}
int	ft_printf(const char *str, ...)
{
	va_list pa;
	va_start(pa, str);
	int i;
	int lenght;

	lenght = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			lenght += argformat(str[i + 1], pa);
		}
		else
		{
			printf("%c",str[i]);
		}
		i++;
	}
	va_end(pa);
	return (lenght);
}

int	main(void)
{
	char	a;

	a = 'B';
	ft_printf("hello world%c", a);
	return (0);
}
