char *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen(str);
    while (str[i] != c && i != 0)
    {
        i--;
        if (str[i] == c)
        {
            return (str + i);
        }
    }
    return (0);
}