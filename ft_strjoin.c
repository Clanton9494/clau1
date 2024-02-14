/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:04:33 by clanton           #+#    #+#             */
/*   Updated: 2024/02/08 14:04:35 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_count(char const *s1, char const *s2)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (s1[count] != '\0')
		count++;
	while (s2[count2] != '\0')
		count2++;
	return (count + count2);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	p = malloc (((ft_count(s1, s2)) + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
	p = NULL;
	free(p);
}

/* int main (void)
 {
	printf("%s\n", ft_strjoin("hola", ""));
 }*/
