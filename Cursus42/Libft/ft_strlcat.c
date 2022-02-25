#include "libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    int lenght;

    j = 0;
    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while(i < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    lenght = i + j;
    return (lenght);
}

//continue test