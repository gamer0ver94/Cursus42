#include "libft.h"
size_ft_strlcpy(char* dest, const char*src, size_t destsize)
{
    int i;

    i = 0;
    while(i < destsize)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft(strlen(dest)));
}

//review urgent