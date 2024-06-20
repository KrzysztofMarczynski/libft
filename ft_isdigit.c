/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarczyn <kmarczyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:22:52 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/03/01 00:04:53 by kmarczyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	unsigned char	i;

	i = '2';
	printf("%d\n", ft_isdigit(i));
	printf("%d\n", isdigit(i));
}
*/
