#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *newstr;
    int lenght;
    int i;

    i = 0;
    lenght = ft_strlen(s1) + ft_strlen(s2) + 1;
    newstr = (char*)malloc(sizeof(char) * lenght);
    if(!newstr)
    {
        return (NULL);
    }
    while (i < ft_strlen(s1))
    {
        newstr[i] = s1[i];
        i++;
    }
    i = 0;
    while (i < ft_strlen(s2))
    {
        newstr[ft_strlen(s1) + i] = s2[i];
        i++;
    }
    newstr[lenght - 1] = '\0';
    return (newstr);
}