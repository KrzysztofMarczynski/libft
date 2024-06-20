/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:57:52 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/13 22:48:22 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s = src;

	d = dest;
	if (!d && !s)
	{
		return (0);
	}
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	test[] = "Karasuie";
	char	*dest;

	ft_memcpy(dest, test, sizeof(test));
	printf("%s \n", dest);
}
*/