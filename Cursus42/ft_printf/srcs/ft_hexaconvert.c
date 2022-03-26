#include "../includes/ft_printf.h"

int hexaconvert(int arg)
{
	int co = arg;
	int i = 0;
	int j;
	char *remainder;
	int arglenght;

	arglenght = 0;
	j = 0;
	if (arg < 0)
	{
		write(1,"-",1);
		arglenght++;
	}
	if(arg == 0)
	{
		write(1,"0",1);
		return(1);
	}

	while(co != 0)
	{
		co = co / 16;	
		i++;
	}
	remainder = malloc(sizeof(char) * i + 1);
	co = arg;
	arglenght =+ i;
	while (i != 0)
	{
		co = arg % 16;
		arg = arg / 16;
		if(co > 9)
		{
			remainder[j] = co + 55;
			j++;
			i--;
		}
		else
		{
			remainder[j] = co + 48;
			j++;
			i--;
		}
			
	}
	remainder[j] = '0';
	while(j != 0)
	{
		write(1,&remainder[j - 1],1);
		j--;
	}
	free(remainder);
	return (arglenght);
}