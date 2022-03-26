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

#include "../includes/ft_printf.h"

static int	formatidentifier(char str, va_list pa)
{
	int arglenght;

	arglenght = 0;
	if (str == 'c')
	{
		ft_putchar_fd(va_arg(pa, int), 1);
		arglenght ++;
	}
	if (str == 's')
	{
		arglenght += ft_putstr(va_arg(pa, char *));
	}
	if (str == 'd')
	{
		arglenght += ft_putnbr(va_arg(pa, int));
	}
	if (str == 'i')
	{
		arglenght += ft_writeitoa(va_arg(pa, int));
	}
	if (str == 'x')
	{
		arglenght =+ hexaconvert(va_arg(pa, int));
	}
	return (arglenght);
}

int	ft_printf(const char *str, ...)
{
	va_list pa;
	va_start(pa, str);
	int i;
	int arglenght;

	arglenght = 0;
	i = 0;
	arglenght = 0;
	while (str[i])
	{
		if (str[i] == '%')		//TODO THE BONUS HERE WE NEED TO SEARCH FOR THE FLAGS BEFORE THE FORMAT IDENTIFIER
		{
			arglenght += formatidentifier(str[i + 1], pa);
			i++;
		}
		else
		{
			printf("%c",str[i]);
			arglenght++;
		}
		i++;
	}
	va_end(pa);
	return(arglenght);
}

