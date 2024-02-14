/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clanton <clanton@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:53:43 by clanton           #+#    #+#             */
/*   Updated: 2024/02/14 11:54:21 by clanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numsize(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static char	*testminint(void)
{
	char	*s;

	s = (char *) malloc((12) * sizeof(char));
	if (s == NULL)
		return (NULL);
	ft_strlcpy(s, "-2147483648", 12);
	return (s);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	int		is_negative;

	is_negative = 0;
	if (n == -2147483648)
		return (testminint());
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	size = numsize(n);
	str = (char *) malloc((size + 1 + is_negative) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[size + is_negative] = '\0';
	while (size--)
	{
		str[size + is_negative] = (n % 10) + '0';
		n = n / 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}

/*int	main(void)
{
	int a;

	a = 1234;
	printf("%s", ft_itoa(a));
}*/