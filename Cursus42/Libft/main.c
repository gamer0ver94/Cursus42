#include "libft.h"
#include <stdio.h>
int main(void)
{
	char str[10] = "hello";
	int n = 2;
	ft_bzero(str,n);
	printf("%s",str);
	return(0);
}

