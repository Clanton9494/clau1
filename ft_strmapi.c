/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:55:07 by clanton           #+#    #+#             */
/*   Updated: 2024/02/14 11:55:09 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned long	i;
	unsigned long	l;
	char			*str;

	l = 0;
	while (s[l] != '\0')
		l++;
	str = (char *)malloc((l + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
	str = NULL;
	free (str);
}
