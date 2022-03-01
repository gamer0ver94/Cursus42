#include "libft.h"

char *ft_strdup(const char *string)
{
    char *newstr;
    size_t i;
    size_t size;

    size = ft_strlen(string);
    i = 0;
    if(!string)
    {
        return(NULL);
    }
    newstr = (char*)malloc(sizeof(char) * size + 1);
    while(i < size)
    {
        newstr[i] = string[i];
        i++;
    }
    newstr[i] = '\0';
    return (newstr);
}