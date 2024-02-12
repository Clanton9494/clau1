/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 23:45:57 by clanton           #+#    #+#             */
/*   Updated: 2024/02/11 19:31:33 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

static char	*copy_str(const char *s, int start, int end)
{
	int		length;
	int		i;
	char	*result;

	i = 0;
	length = end - start;
	result = (char *)malloc(length + 1);
	if (!result)
		exit(1);
	while (i < length)
	{
		result[i] = s[start + i];
		i++;
	}
	result[length] = '\0';
	return (result);
}

char	**split(char const *s, char c)
{
	int		index;
	int		start;
	int		i;
	char	**result;
	int		count;

	index = 0;
	start = 0;
	i = 0;
	count = count_str(s, c);
	result = (char **)calloc(count, sizeof(char *));
	if (!result)
		exit(1);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result[index] = copy_str(s, start, i);
			start = i + 1;
			index++;
		}
		i++;
	}
	result[index] = copy_str(s, start, i);
	return (result);
}

/*int	main(void)
{
	const char *input = "Hola,Mundo,Split,En,C";
	char delimiter = ',';
	int count;
	char **tokens = split(input, delimiter);

	printf("Subcadenas:\n");
	int i = 0;
	while (i < count)
	{
		printf("%s\n", tokens[i]);
		free(tokens[i]); // Liberamos la memoria asignada
		i++;
	}

	free(tokens); // Liberamos el arreglo de punteros
	return 0;
}
*/