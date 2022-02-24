#include "libft.h"
void	ft_bzero(void * s, size_t n)
{
	int i;
	char *str = (char *)s;

	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
//review