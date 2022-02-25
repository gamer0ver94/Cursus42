#include "libft.h"
void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	char *str2;

	str2 = (char*)str;
	i = 0;
	while (i < n)
	{
		str2[i] = c;
		i++;
	}
	return(str2);
}