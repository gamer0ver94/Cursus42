#include "get_next_line.h"
#include "stdio.h"

char	*read_line(fd,buffer)
{
	int bytes; //bytes to read
	int i;
	
	// i = 0;
	bytes = 1;
	read(fd, buffer, bytes);
	printf("%s",buffer);
	return(buffer);
}

char	*get_next_line(int fd)
{
	char *buffer; //contain the save
	if (!fd)
	{
		return (0);
	}
	read_line(fd);
	return (buffer);
}