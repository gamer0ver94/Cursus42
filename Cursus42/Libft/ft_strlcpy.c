#include "libft.h"
size_t ft_strlcpy(char* dest, const char*src, size_t destsize)
{
    size_t i;

    i = 0;
    while(i < destsize)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(dest));
}

//review urgent