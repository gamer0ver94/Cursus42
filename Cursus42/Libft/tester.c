#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main (void)
{
	char n;
	char a;
	char str[15];
	char str2[15];
	int size;

	printf("1. ft_isalpha	/	2. ft_isalnum	/	3. ft_isdigit \n");
	printf("4. ft_isprint	/	5. ft_strlen	/	6. ft_isascii \n");
	printf("7. ft_memset	/	8. ft_bzero	/	9. ft_memcpy\n");
	printf("PLEASE SELECT ONE FUNCTION TO TEST \n");
	scanf("%s", &n);
	system("clear");
	switch (n)
	{
		case '1':
			printf("FT_ISALPHA\n This function checks whether a character is an alphabet or not.\n");
			printf("WRITE A CARACTER\n");
				scanf("%s", &n);
				if(ft_isalpha(n) == '0')
					printf("This caracter is not alphabet");
				else
					printf("This caracter is alphabet");
			break;

		case '2':
			printf("FT_ISALNUM\n This function checks whether the argument passed is an alphanumeric character (alphabet or number) or not.\n");
			printf("WRITE A CARACTER\n");
			scanf("%s", &n);
			if (ft_isalnum(n) == 0)
				printf("This caracter is not alphabet or number\n");
			else
				printf("This caracter is a alphabet or number\n");
			break;

		case '3':
			printf("FT_ISDIGIT\n");
			printf("FT_ISDIGIT\n function checks whether a character is numeric character (0-9) or not.\n");
			printf("WRITE A CARACTER\n");
			scanf("%s", &n);
			if (ft_isdigit(n) == 0)
				printf("This caracter is not a digit\n");
			else
				printf("This caracter is a digit\n");
			break;

		case '4':
			printf("FT_ISPRINT\n");
			printf("FT_ISPRINT\n checks whether a character is a printable character or not.\n");
			printf("WRITE A CARACTER\n");
			scanf("%s", &n);
			if (ft_isprint(n) == 0)
				printf("This caracter is not printable\n");
			else
				printf("This caracter is printable\n");
			break;

		case '5':
			printf("FT_STRLEN\n");
			break;

		case '6':
			printf("FT_ISASCII\n");
			break;
		case '7':
			printf("FT_MEMSET\n");
			printf("WRITE A WORD\n");
			scanf("%s",&*str);
			printf("WRITE A CARACTER TO REPLACE OTHER CARACTERS\n");
			scanf("%s", &a);
			printf("WRITE THE NUMBER OF CARACTER YOU WANT TO FILL\n");
			scanf("%d",&size);
			ft_memset(str,a,size);
			printf("%s", &*str);
			break;
		case '8':
			printf("FT_BZERO\n");
			printf("WRITE A WORD\n");
			scanf("%s", &*str);
			printf("WRITE THE NUMBER OF CARACTERS TO ERASE \n");
			printf("%s", &*str);
			scanf("%d", &size);
			ft_bzero(str,size);
			printf("%s", &*str);
			break;

		case '9':
			printf("FT_MEMCPY\n");
			printf("WRITE A WORD OR LESS EMPTY\n");
			scanf("%s",&*str);
			printf("WRITE A WORD TO COPY TO YOUR PREVIOUS WORD\n");
			scanf("%s", &*str2);
			printf("WRITE THE NUMBER OF CARACTER YOU WANT TO COPY\n");
			scanf("%d", &size);
			ft_memcpy(str,str2,size);
			printf("%s", &*str);
			break;

		case 10:
			printf("FT_");
		default:
			printf("ERROR\n");
	}
	return (0);
}
