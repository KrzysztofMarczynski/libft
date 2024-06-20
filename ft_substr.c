/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:05:22 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/15 20:06:27 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	i;
	char	*substring;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substring = ft_calloc(len + 1, sizeof(char));
	if (!substring)
		return (0);
	i = 0;
	while (i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	return (substring);
}
/*
int	main(void)
{
	char	test[] = "karasie wiadomo co";
	char	*res;

	res = ft_substr(test, 50, ft_strlen(test));
	if (res)
	{
		printf("%s\n", res);
		free(res);
	}
	return (0);
}
*/