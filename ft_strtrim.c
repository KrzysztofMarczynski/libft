/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 22:17:15 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/14 14:22:09 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	i;
	size_t	len;
	size_t	final;

	i = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i == len)
		return (ft_strdup(""));
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]))
	{
		len--;
	}
	final = (len - i + 1);
	res = (char *)malloc(sizeof(char) * final);
	if (!res)
		return (0);
	ft_strlcpy(res, (s1 + i), final);
	return (res);
}
/*
int	main(void)
{
	char *test = "ma ala ma kota ma go w dupie ma";
	char *res = ft_strtrim(test, "ma");
	printf("pa to:%s", res);
}
*/