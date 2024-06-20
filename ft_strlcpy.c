/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:50:32 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/03/13 18:22:45 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	if (dest == NULL || src == NULL)
	{
		return (0);
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size > 0)
	{
		x = 0;
		while (size - 1 > x && src[x] != '\0')
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (i);
}
/* 
 int	main(void)
{
	char	src[] = "Karas";
	char	dest[10];

	ft_strlcpy(dest, src, 4);
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
}
 */