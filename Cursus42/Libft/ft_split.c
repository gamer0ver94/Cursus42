#include "libft.h"
int indexfind(char const *s, char c, int index)
{
    int j;

    j = 0;
    while (s[index] == c)
    {
        index++;
    }
    while (s[ index + j] != c)
    {
        j++;
    }
    return (j + index);
}

char **copyword(char const *s, char **str, int index, int i, char c)
{
    int j;

    j = 0;
    while (s[index + j] == c)
    {
        index++;
    }
    while (s[index + j] != c && s[index + j] != 0)
    {
        str[i][j] = s[index + j];
        j++;
    }
    str[i][j] = '\0';
    return (str); 
}
char numberofwords(char const *s, char c)
{
    int i;
    int words;

    words = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            i++;
        }
        if (s[i] != c && s[i] != 0)
        {
            if(s[i + 1] == c || s[i + 1] == 0)
            {
                words++;
            }
            i++;
        }
    }
    return (words);
}


int wordlenght(char const *s, char c, int index)
{
    int j;

    j = 0;
    while (s[index] == c)
    {
        index++;
    }
    while (s[ index + j] != c)
    {
        j++;
    }
    return (j);
}
char **allocatecpy(char const *s, char **str, char c, int words)
{
    int i;
    int index;
    int wordl;

    i = 0;
    index = 0;
    
    wordl = wordlenght(s, c, 0);
    while (i < words)
    {
        str[i] = malloc(sizeof(char) * wordl + 1);
        if(!str[i])
        {
            return(NULL);
        }
        copyword(s,str,index,i, c);
        index = indexfind(s, c, index);
        i++;
    }
    return (str);
}

char **ft_split(char const *s, char c)
{
    int i = 0;
    char **str;
    int words;

    words =  numberofwords(s,c);
    // if(!s && !c)
    // {
    //     return(0);
    // }
    str = malloc(sizeof(char *) * (words + 1));
    if(!str)
    {
        return (NULL);
    }
    while (i < words)
    {
        allocatecpy(s,str,c,words);
        i++;
    }
    str[words] = '\0';
    return (str);
}