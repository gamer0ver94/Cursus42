#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int	main(void)
{
	int file;
	//char	buffer[40];

	file = open("testing.txt", O_RDONLY);
	get_next_line(file);
	return (0);
}
