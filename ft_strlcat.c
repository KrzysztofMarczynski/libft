/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:51:54 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/04/23 21:25:03 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	i;

	s = 0;
	d = 0;
	while (dest[d] != '\0' && d < size)
	{
		d++;
	}
	while (src[s] != '\0')
	{
		s++;
	}
	i = 0;
	while (src[i] && (d + i + 1) < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d < size)
	{
		dest[d + i] = '\0';
	}
	return (d + s);
}
/*
int	main(void)
{
	char	src[] = "kopiowany";
	char	dest[] = "tekst jest ";

	ft_strlcat(dest, src, 30);
	printf("dest = %s\n", dest);
}
*/