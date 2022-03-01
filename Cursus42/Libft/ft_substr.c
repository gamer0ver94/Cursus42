#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *newstr;
    size_t i;

    i = 0;
    if (!s)
    {
        return (NULL);
    }
    newstr = (char*)malloc(sizeof(char)* len);
    while (i < len)
    {
        newstr[i] = s[i + start];
        i++;
    }
    return (newstr);
}