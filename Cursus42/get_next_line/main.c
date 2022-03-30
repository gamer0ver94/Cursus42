#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int	main(void)
{
	int file;
	int i = 0;
	char *a;
	file = open("testing.txt", O_RDONLY);
	while(i < 2)
	{
		a = get_next_line(file);
		printf("|%s|\n",a);
		free(a);
		i++;
	}
	return (0);
}
