/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlg_ubuntu_programer <mlg_ubuntu_progra    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 22:05:46 by kmarczyn          #+#    #+#             */
/*   Updated: 2024/04/23 22:11:32 by mlg_ubuntu_      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*original;
	char	*duplicate;

	original = "Hello, world!";
	duplicate = ft_strdup(original);
	if (!duplicate)
	{
		printf("Failed to duplicate string\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);
	free(duplicate); // Don't forget to free the memory!
}
*/