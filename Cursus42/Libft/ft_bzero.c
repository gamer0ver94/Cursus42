void	ft_bzero(void * s, int n)
{
	int i;
	char *str = s;

	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
//review