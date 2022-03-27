#include "../includes/ft_printf.h"

int ft_pointertohexa(unsigned int arg)
{
	int arglenght;

	arglenght = 0;
	if(arg == 0)
	{
		ft_putchar_fd('0', 1);
		arglenght++;
	}
	else{
		arglenght += ft_putstr("0x");
		arglenght += ft_hexaconvert(arg,'x');
	}
	return(arglenght);
}