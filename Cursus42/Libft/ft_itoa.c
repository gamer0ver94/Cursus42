/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:08:22 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/09 15:54:15 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digitcount(int n)
{
	int	count;

	count = 0;
	if (n <= -2147483648)
	{
		return (11);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		count++;
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		counted;

	counted = digitcount(n);
	str = malloc(sizeof(char) * counted + 1);
	if (!str)
		return (NULL);
	if (n <= -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	str[counted] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[counted - 1] = (n % 10) + '0';
		counted--;
		n = n / 10;
	}
	return (str);
}
