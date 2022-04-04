#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int	main(void)
{
	int file;
	int i = 0;
	file = open("testing.txt", O_RDONLY);
	while(i < 2)
	{
		printf("line %d |%s|\n", i + 1 ,get_next_line(file));
		// get_next_line(file);
		i++;
	}
	return (0);
}
