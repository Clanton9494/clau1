/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:04:20 by clanton           #+#    #+#             */
/*   Updated: 2024/01/22 13:04:22 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	char	*b;
	char	*end;

	ptr = malloc(num * size);
	b = (char *)ptr;
	if (ptr != NULL)
	{
		while (num-- > 0)
		{
			end = b + size;
			while (b < end)
			{
				*b++ = 0;
			}
		}
	}
	return (ptr);
}
