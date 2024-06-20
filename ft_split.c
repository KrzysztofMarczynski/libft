/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:17:22 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/14 15:50:51 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static size_t	wordlen(char const *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	else
		return (ft_strchr(s, c) - s);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	wlen;
	int		i;

	if (!s)
		return (0);
	res = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!res)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			wlen = wordlen(s, c);
			res[i] = ft_substr(s, 0, wlen);
			s += wlen;
			i++;
		}
	}
	res[i] = NULL;
	return (res);
}
/*
int	main(void)
{
	char	**res;
	char	*test;

	test = "Karasie jedza gowno";
	res = ft_split(test, 32);
	while (**res)
	{
		printf("pa to:%c", **res);
	}
	printf("pa to:%c", **res);
}
*/