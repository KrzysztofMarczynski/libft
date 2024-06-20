/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:16:35 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/14 18:10:13 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigit(int c)
{
	int	len;

	len = 0;
	if (c == 0)
		len = 1;
	else
	{
		while (c)
		{
			c /= 10;
			len++;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*res;
	long int	nb;
	int			i;

	nb = n;
	i = countdigit(n);
	if (n < 0)
	{
		nb *= (-1);
		i++;
	}
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	*(res + i) = 0;
	while (i--)
	{
		*(res + i) = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		*(res + 0) = '-';
	return (res);
}
/*
int	main(void)
{
	int	a;

	a = -2137;
	printf("Liczba:%s", ft_itoa(a));
}
*/