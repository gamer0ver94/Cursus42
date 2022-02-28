#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int res;
    
    res = 0;
    i = 0;
    if(str[i] < '0' || str[i] > '9')
        {
            return (0);
        }
    while(str[i] != 0)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            return (res);
        }
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return (res);
}