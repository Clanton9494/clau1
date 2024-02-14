/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:50:26 by clanton           #+#    #+#             */
/*   Updated: 2024/01/16 11:50:28 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//REVISAR, NO TERMINADO
#include <unistd.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	u1;
	unsigned char	u2;

	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] || str2[i]) && i < n)
	{
		u1 = (unsigned char)str1[i];
		u2 = (unsigned char)str2[i];
		if (u1 != u2)
		{
			if (u1 > u2)
				return (1);
			else if (u1 < u2)
				return (-1);
		}
		i++;
	}
	return (0);
}
