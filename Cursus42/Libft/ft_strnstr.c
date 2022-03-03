#include "libft.h"
// still need to review the return
char *ft_strnstr(const char *big, const char *little , size_t len)
{
    int i;
    size_t h;

    h = 0;
    i = 0;
    if (!little)
    {
        return ((char*)big);
    }
    while(big[i] != 0)
    {
        if(big[i] == little[h])
        {
            while(big[i] == little[h] && len > h)
            {
                if(h == len && big[i] == little[h])
                {
                    return ((char*)little);
                }
                i++;
                h++;
            }
        }
        h = 0;
        i++;
    }
    return (NULL);
}