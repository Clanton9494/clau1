/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:44:01 by clanton           #+#    #+#             */
/*   Updated: 2024/02/08 12:44:03 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static char	*ft_case(unsigned int count)
{
	char	*p;

	p = malloc ((count + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	*p = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	count;
	size_t			i;

	count = 0;
	i = 0;
	while (s[count] != '\0')
		count++;
	if (start >= count)
		return (ft_case(0));
	if (count - start < len)
		len = count - start;
	p = malloc ((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
	p = NULL;
	free(p);
}
/*int	main(void)
{
	printf("%s\n", ft_substr("Hola que tal", 0, 0));
}*/
