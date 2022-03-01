#include "libft.h"

char *ft_strdup(const char *string)
{
    char *newstr;

    if(!string)
    {
        return(NULL);
    }
    newstr = (char*)malloc(sizeof(char)*ft_strlen(string) + 1);
    ft_strcpy(string,newstr);
    return (newstr);
}