/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:04:33 by clanton           #+#    #+#             */
/*   Updated: 2024/01/12 16:04:36 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*my_memmove(void	*dest, const void	*src, size_t len)
{
	char	*d;
	char	*s;
	char	*lasts;
	char	*lastd;

	d = (char *) dest;
	s = (char *) src;
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
		{
			*lastd-- = *lasts--;
		}
	}
	return (dest);
}
