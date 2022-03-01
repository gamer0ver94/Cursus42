#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    size_t special;
    size_t size;
    char *newstr;

    special = ft_strlen(set);
    j = 0;
    i = 0;
    size = 0;

    while(i < ft_strlen(s1))
    {
        while(s1[i] ==set[j])
        {
            i++;
            j++;
            if(j == special)
            {
                size++;
                j = 0;
            }
        }
        i++;
    }
    newstr = (char*)malloc(sizeof(char) * size);
}