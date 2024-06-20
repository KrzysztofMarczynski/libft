/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:02:52 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/03/13 13:56:13 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c - 'A' + 'a');
	}
	else
		return (c);
}
/*
int	main(void)
{
	char	low;
	char	high;

	low = 'D';
	high = ft_tolower(low);
	printf("low_to_high = %c\n", high);
}
*/