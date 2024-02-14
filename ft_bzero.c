/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:32:27 by clanton           #+#    #+#             */
/*   Updated: 2024/01/11 12:32:32 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_bzero(void *ptr, size_t num)
{
	unsigned char	*p;

	p = (unsigned char *) ptr;
	while (num > 0)
	{
		*p++ = '\0';
		num--;
	}
	return (ptr);
}
