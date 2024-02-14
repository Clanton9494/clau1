/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:16:05 by clanton           #+#    #+#             */
/*   Updated: 2024/01/16 15:16:07 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			b;

	a = (unsigned char *) s;
	b = 0;
	while (b < n)
	{
		if (*a == (unsigned char) c)
		{
			return ((void *)a);
		}
		a++;
		b++;
	}
	return (NULL);
}
