/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:56:22 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/05/14 21:54:56 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	test[] = "test";
	int		x;

	x = ft_strlen(test);
	printf("str = %d \n", x);
}
*/