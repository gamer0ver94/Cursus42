#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main (void)
{
	char n;

	printf("1. ft_isalpha	/	2. ft_isalnum	/	3. ft_isdigit \n");
	printf("4. ft_isprint	/	5. ft_strlen \n");
	printf("PLEASE SELECT ONE FUNCTION TO TEST \n");
	scanf("%s", &n);
	system("clear");
	switch (n)
	{
		case '1':
			printf("FT_ISALPHA\n This function checks whether a character is an alphabet or not.\n");
			printf("WRITE A CARACTER\n");
			while(n != 0)
			{
				scanf("%s", &n);
				if(ft_isalpha(n) == ')
					printf("This caracter is not alphabet");
				else
					printf("This caracter is alphabet");
			}
			break;

		case '2':
			printf("FT_ISALNUM\n");
			break;

		case '3':
			printf("FT_ISDIGIT\n");
			break;

		case '4':
			printf("FT_ISPRINT\n");
			break;

		case '5':
			printf("FT_STRLEN\n");
			break;

		case '6':
			printf("FT_ISASCII\n");
			break;

		default:
			printf("ERROR\n");
	}
	return (0);
}
