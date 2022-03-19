#include <stdlib.h>
#include <stdio.h> //erease;
#include <stdarg.h>
#include <libftprint.h>
static void argformat(char str, va_list args)
{
	if(str == 'c')
		write()
	if(str == 's')

	if(str == 'p')

	if(str == 'd')

	if(str == 'i')

	if(str == 'u')

	if(str == 'x')

	if(str == 'X')

	if(str == '%')

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