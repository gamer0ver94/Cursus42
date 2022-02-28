#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    char *string;
    
    string = (char*)str;
    i = 0;
    
    while (i < n)
    {
        if(string[i] == c)
        {
            return (string + i);
        }
        i++;
    }
    return (0);
}