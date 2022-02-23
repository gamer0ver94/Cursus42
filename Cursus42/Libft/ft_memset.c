void ft_memset(char *str, char a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		str[i] = a;
		i++;
	}
}

