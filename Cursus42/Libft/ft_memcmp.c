#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    char *string1;
    char *string2;
    size_t i;

    string1 = (char*)str1;
    string2 = (char*)str2;
    i = 0;
    while(i < n)
    {
        if(string1[i] != string2[i])
        {
            return (string1[i] - string2[i]);
        }
        i++;
    }
    return (0);

}