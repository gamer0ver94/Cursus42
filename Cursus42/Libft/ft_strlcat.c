char *ft_strcat(char *dest, const char *src)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while(dest)
    {
        i++;
    }
    while(src)
    {
        dest[i] = src[j];
        j++;
    }
    return (dest);
}