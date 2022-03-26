#include "../includes/ft_printf.h"

int	ft_putnbr(int n)
{
	int	l;
	int i;
	l = n;

	i = 0;
	if (l < 0)
	{
		l = l * -1;
		write (1, "-", 1);
		i++;
	}
	if (l == -2147483648)
	{
		ft_putchar_fd('2', 1);
		l = 147483648;
		i++;
	}
	if (l > 9)
	{
		ft_putnbr(l / 10);
		ft_putchar_fd((l % 10) + '0', 1);
		i++;
	}
	else
	{
		ft_putchar_fd(l + '0', 1);
		i++;
	}
	return(i);
}