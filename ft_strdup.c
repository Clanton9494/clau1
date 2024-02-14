/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:22:44 by clanton           #+#    #+#             */
/*   Updated: 2024/01/23 16:22:45 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	p = malloc((count + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
	p = NULL;
	free(p);
}

/*int	main(void)
{
	printf("%s\n", ft_strdup("Hola que tal"));
	printf("%s\n", strdup("Hola que tal"));
}*/
