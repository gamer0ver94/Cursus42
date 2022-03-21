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

#include <stdlib.h>
#include <stdio.h> //erease;
#include <stdarg.h>
#include <libftprint.h>
#include "libft.h"

static char *decitohexa(va_list args)
{
	int i;
	char *hexa;

	i = 0;
	while (args != 0)
	{
		args = args % 16;
		hexa[i] = ft_itoa(args);
		i++;
	}
	return (hexa);
}

static void	argformat(char str, va_list args)
{
	if (str == 'c')
	{
		return (ft_putchar(va_arg(args)));
	}
	if (str == 's')
	{
		ft_putstr(va_arg(args));
	}
	if (str == 'p')
	{

	}
	if (str == 'd')

	if (str == 'i')

	if (str == 'u')

	if (str == 'x')

	if (str == 'X')

	if (str == '%')

}
int	ft_printf(const char *str, ...)
{
	va_list args;
	va_start(args, str);
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			argformat(str[i + 1], args);
		}
		else
		{
			printf("%c",str[i]);
		}
		i++;
	}
	va_end(args);
}
int main (void)
{
	char c = 't';
	ft_printf("%c",c);
	return (0);
}