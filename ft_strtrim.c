/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:48:39 by clanton           #+#    #+#             */
/*   Updated: 2024/02/08 15:48:40 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	start(int setsize, char const *set, char const *s1)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (s1[i] && h <= setsize)
	{
		if (s1[i] == set[h])
		{
			i++;
			h = 0;
		}
		else
			h++;
	}
	return (i);
}

static int	end(int setsize, int count, char const *set, char const *s1)
{
	int	h;

	h = 0;
	while (h <= setsize && count > 0)
	{
		if (s1[count] == set[h])
		{
			count--;
			h = 0;
		}
		else
			h++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	count;
	int	setsize;
	int	savestart;
	int	saveend;

	count = 0;
	setsize = 0;
	while (s1[count] != '\0')
		count++;
	while (set[setsize] != '\0')
		setsize++;
	savestart = start(setsize, set, s1);
	saveend = end(setsize, count, set, s1);
	return (ft_substr(s1, savestart, ((saveend - savestart) + 1)));
}

/*int	main(void)
{
	printf("%s\n", ft_strtrim("", ""));
}*/
