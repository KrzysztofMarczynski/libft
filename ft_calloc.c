/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:05:30 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/13 22:37:13 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	if (count != 0 && (SIZE_MAX / count) < size)
		return (0);
	pointer = malloc(count * size);
	if (!pointer)
		return (0);
	ft_bzero(pointer, (count * size));
	return (pointer);
}

/*
int	main(void)
{
	void	*ptr;

	ptr = ft_calloc(5, 5);
	printf("Alocation = %p", ptr);
	free(ptr);
}
*/