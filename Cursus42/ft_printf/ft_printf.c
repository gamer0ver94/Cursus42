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

char a;

static void	argformat(char str, va_list args)
{
	if (str == 'c')
	{
		ft_putchar_fd(args, 1);
	}
	if (str == 's')
	{
		char a = va_arg(args, char);
		ft_putstr_fd(&a, 1);
	}
	// if (str == 'p')
	// {

	// }
	// if (str == 'd')

	// if (str == 'i')

	// if (str == 'u')

	// if (str == 'x')

	// if (str == 'X')

	// if (str == '%')

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

int	main(void)
{
	char	a;

	a = 'B';
	ft_printf("hello world%c", a);
	return (0);
}
