#include "../includes/ft_printf.h"

static char	*convert(char *str,unsigned int counted, unsigned int n)
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

static int	digitcount(unsigned int n)
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

int	ft_unsigneditoa(unsigned int n)
{
	char	*str;
	int		counted;

	counted = digitcount(n);
	str = malloc(sizeof(char) * counted + 1);
	if (!str)
		return (0);
	convert(str, counted, n);
	ft_putstr(str);
	free(str);
	return (counted);
}
