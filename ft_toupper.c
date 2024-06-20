/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:01:10 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/03/01 00:05:06 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	else
		return (c);
}
/*
int	main(void)
{
	char	low;
	char	high;

	low = 't';
	high = ft_toupper(low);
	printf("low_to_high = %c\n", high);
}
*/