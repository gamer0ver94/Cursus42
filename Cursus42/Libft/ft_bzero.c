void	ft_bzero(void * s, int n)
{
	int i;
	char *str = s;

	i = 0;
	while (n > i)
	{
		str[i] = '\0';
		i++;
	}
}
