#include "libft.h"
int digitcount(int n)
{
    int count;

    count = 0;
    if( n == 0)
    {
        return (1);
    }
    if(n < 0)
    {
        count++;
        n = n * - 1;
    }
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int n)
{
    char *str;
    int counted;

    counted = digitcount(n);
    str = malloc(sizeof(char) * counted + 1);
    if(!str)
    {
        return (NULL);
    }
    str[counted] = '\0';
    if(n < 0)
    {
        str[0] = '-';
        n = n * - 1;
    }
    if (n == 0)
    {
        str[0] = '0';
    }
    if(n == -2147483648)
    {
        
    }
    while(n > 0)
    {
        str[counted - 1] = (n % 10) + '0';
        counted--;
        n = n / 10;
    }
    return (str);
}