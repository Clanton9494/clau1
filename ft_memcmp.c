/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:51:29 by clanton           #+#    #+#             */
/*   Updated: 2024/01/20 18:51:31 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			cont;

	a = (unsigned char *) str1;
	b = (unsigned char *) str2;
	cont = 0;
	while (cont < n)
	{
		if (*a != *b)
		{
			return (*a - *b);
		}
		a++;
		b++;
		cont++;
	}
	return (0);
}
