#include "libft.h"
void ft_memset(void *str, int c, int n)
{
	int i;
	char *str2;

	str2 = (char*)str;
	i = 0;
	while (i < n)
	{
		str2[i] = c;
		i++;
	}
}
//review
