void ft_memcpy(void *dest, const void *src, int n)
{
	int	i;
	char *tcdest;
	char *tcsrc;

	tcdest = (char*)dest;
	tcsrc = (char*)src;

	i = 0;

	while(i < n)
	{
		tcdest[i] = tcsrc[i];
		i++;
	}
}
