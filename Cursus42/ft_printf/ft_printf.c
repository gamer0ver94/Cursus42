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
#include "stdio.h"
static char	*convert(char *str, int counted, int n)
{
	if (n == -2147483648)
	{	
		n = -147483648;
		str[1] = '2';
	}
	str[counted] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[counted - 1] = (n % 10) + '0';
		counted--;
		n = n / 10;
	}
	return (str);
}

static int	digitcount(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		return (11);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		count++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		counted;

	counted = digitcount(n);
	str = malloc(sizeof(char) * counted + 1);
	if (!str)
		return (NULL);
	convert(str, counted, n);
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

static int hexaconverter(int arg)
{
	int co = arg;
	int i = 0;
	int j;
	char *remainder;
	int arglenght;
	j = 0;

	while(co != 0)
	{
		co = co / 16;	
		i++;
	}
	remainder = malloc(sizeof(char) * i + 1);
	co = arg;
	arglenght = i;
	while (i != 0)
	{
		co = arg % 16;
		arg = arg / 16;
		if(co > 9)
		{
			remainder[j] = co + 55;
		}
		else
			remainder[j] = co + 48;
		printf("%d\n",co);
		j++;
		i--;
	}
	while(j != -1)
	{
		write(1,&remainder[j],1);
		j--;
	}
	free(remainder);
	return (arglenght);
}

static int	formatidentifier(char str, va_list pa)
{
	int arglenght;

	arglenght = 0;
	if (str == 'c')
	{
		ft_putchar_fd(va_arg(pa, int), 1);
		arglenght += 1;
	}
	if (str == 's')
	{
		ft_putstr_fd(va_arg(pa, char *), 1);
		// arglenght =+ ft_strlen(pa, char *);
	}
	// if (str == 'p')
	// {

	// }
	// if (str == 'd')

	// if (str == 'i')

	// if (str == 'u')

	if (str == 'x')
	{
		arglenght =+ hexaconverter(va_arg(pa, int));
	}
	// if (str == 'X')

	// if (str == '%')
	return (arglenght);
}

int	ft_printf(const char *str, ...)
{
	va_list pa;
	va_start(pa, str);
	int i;
	int arglenght;

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

int	main(void)
{
	int	a;
	a = 3700;
	ft_printf("%x", a);
	return (0);
}
