#include "libft.h"
static int countfunction(char *s1, char *set)
{
     int i;
    int j;
    int count;

    j = 0;
    i = 0;
    count = 0;
    while(s1[i])
    {
       while(s1[i] == set[j])
       {
           i++;
           j++;
           count++;
       }
       if(s1[i] != ft_strlen(set))
       {
           count = count -j;
           j = 0;
       }
       count++;
       i++;
    }
    return(count);
}
char *ft_strtrim(char const *s1, char const *set)
{
   
    char *newstr;
    int i;
    int j;
    int count;
    int h;
    
    h = 0;
    i = 0;
    j = 0;
    count = countfunction(s1,set);
    newstr = (char*)malloc(sizeof(char) * count + 1);
    while(s1[i])
    {
        while (s1[i])
        {
            while(s1[i] != set[j])
            {
                while(s[i] == set[j] && j != ft_strlen(set))
                {
                    
                }
                newstr[h] = s4[i];
                i++;
            }
            i++;
        }
    }
}