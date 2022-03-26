#include "../includes/ft_printf.h"

int ft_putstr(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		write(1,&string[i],1);
		i++;
	}
	return(i);
}