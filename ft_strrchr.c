/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:24:26 by clanton           #+#    #+#             */
/*   Updated: 2024/01/15 17:24:28 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*lastcharacter;

	c = c % 256;
	if (c == '\0')
	{
		while (*str)
			str++;
		return ((char *)str);
	}
	lastcharacter = NULL;
	while (*str)
	{
		if (*str == (char) c)
		{
			lastcharacter = (char *)str;
		}
		str++;
	}
	return (lastcharacter);
}
