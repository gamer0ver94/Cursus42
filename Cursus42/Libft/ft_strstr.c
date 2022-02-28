#include "libft.h"
// revise at home
char *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;
    int h;

    h = 0;
    i = 0;
    j = ft_strlen(needle);
    while(haystack[i] != 0)
    {
        if(haystack[i] == needle[h])
        {
            while(haystack[i] == needle[h] && j > h)
            {
                if(h == j && haystack[i] == needle[h])
                {
                    return (1);
                }
                i++;
                h++;
            }
        }
        h = 0;
        i++;
    }
    return(0);
}