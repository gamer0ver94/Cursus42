#include "libft.h"
char numberofwords(char const *s, char c)
{
    int i;
    int words;

    words = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] = c)
        {
            i++;
        }
        if (s[i] != c)
        {
            if(s[i + 1] == c || s[i + 1] == '\0')
            {
                words++;
            }
            i++;
        }
    }
    return (words);
}
int wordlenght(char const *s, char c)
{
    int j;
    int i;

    i = 0;
    j = 0;
    while (s[i] == c)
    {
        i++;
    }
    while (s[ i + j] != c) //not sure
    {
        j++;
    }
    return (j);
}
int allocatecpy(char const *s, char **str, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < numberofwords(s,c))
    {
        str[i] = malloc(sizeof(char) * wordlenght(s[i] + j, c));
        j = wordlenght(s[i] + j, c);
        i++;
    }
}
char **ft_split(char const *s, char c)
{
    int i = 0;
    char **str;
    str = malloc(sizeof(char) *numberofwords(s,c));
    while (i < numberofwords(s,c))
    {
        allocatecpy(s,str,c);
        i++;
    }
}












#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char numberofwords(char const *s, char c)
{
    int i;
    int words;

    words = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            i++;
        }
        if (s[i] != c)
        {
            if(s[i + 1] == c || s[i + 1] == '\0')
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

    i = 0;
    index = wordlenght(s, c, 0);
    while (i < words)
    {
        str[i] = malloc(sizeof(char) * index);
        index = wordlenght(s[i] + index, c, index);
        copyword(s,str[i],c,index);
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
    str = malloc(sizeof(char) *words);
    while (i < words)
    {
        allocatecpy(s,str[i],c,words);
        i++;
    }
}
int main() {
  **str = ft_split(" jk jk", ' ');
  while (i < 2)
  {
      printf("%s",str[i])
      i++;
  }
  return 0;
}