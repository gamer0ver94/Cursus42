#include "get_next_line.h"
#include "stdio.h"
// char *verify_line()
// {

// }

// char *alocmemory()
// {

// }

char *save_buffer(char *buffer, size_t nbytes)
{
	char *str;
	char *str2;
	static int linesize;

	str = NULL;
	str2 = NULL;
	linesize +=nbytes;
	printf("sd");
	if(!str)
	{
		str = malloc(sizeof(char) * linesize + 1);
		strcpy(str,buffer);
		if(str2)
		{
			strcpy(str,str2);
			strcat(str,buffer);
			free(str2);
		}
		printf("%s",str);
		return(str);
	}
	else
	{
		str2 = malloc(sizeof(char) * linesize + 1);
		strcpy(str2,str);
		strcat(str2,buffer);
		free(str);
		return(str2);
		printf("%s",str2);
	}
}
// char *read_line(int fd, char *buffer, size_t nbytes, char *save)
// {
	
// }

char	*get_next_line(int fd)
{
	char buffer[5];
	size_t nbytes;
	int reader;

	nbytes = 1;
	reader = 1;
	printf("fsa");
	while(reader != 0)
	{
		reader = read(fd,buffer,nbytes);
			if(reader == 0)
			{
				return (0);
			}
		// save_buffer(buffer,nbytes);
	}
	return ("buffer");

}