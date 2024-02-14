/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:28:40 by clanton           #+#    #+#             */
/*   Updated: 2024/01/11 17:28:43 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_memcpy(void *dst, const void *restrict src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) dst;
	b = (unsigned char *) src;
	if (a == NULL && b == NULL)
	{
		return (NULL);
	}
	while (n-- > 0)
	{
		*a++ = *b++;
	}
	return (dst);
}
