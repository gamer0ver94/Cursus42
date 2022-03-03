#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while(i < n)
    {
        if(str1[i] != str2[i])
        {
            if(str1[i] > str2[i])
            {
                return(1);
            }
            return(-1);
        }
        i++;
    }
    return (0);
}