/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:42:09 by clanton           #+#    #+#             */
/*   Updated: 2024/01/20 19:42:12 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	j;

	if (*str2 == '\0')
		return ((char *)str1);
	i = 0;
	while (str1[i] != '\0' && i < len)
	{
		j = 0;
		while (str1[i + j] == str2[j] && (i + j) < len)
		{
			if (str2[j + 1] == '\0')
				return ((char *)&str1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
