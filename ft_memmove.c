/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:58:55 by mlg_ubuntu_       #+#    #+#             */
/*   Updated: 2024/03/01 00:06:04 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (dest == NULL && src == NULL)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}
/*
int	main(void)
{
	char	test[] = "Karasuie";
	char	dest[] = "jedza?123123";

	ft_memmove(dest, test, 3);
	printf("%s \n", dest);
}
*/
