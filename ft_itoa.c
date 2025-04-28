/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:43:31 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 13:36:56 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!*s || !s[i])
		return (0);
	while (s[i])
		i++;
	return (i);
}

int	len_to_malloc(int nb)
{
	long	nb2;
	int		lenght;

	nb2 = nb;
	lenght = 0;
	if (nb2 < 0)
	{
		lenght++;
		nb2 *= -1;
	}
	while (nb2)
	{
		nb2 /= 10;
		lenght++;
	}
	return (lenght);
}

char	*rev_str(char *str)
{
	int		i;
	int		size;
	char	temp;

	i = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
		i++;
	}
	while (str[i])
		i++;
	str[i] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb2;
	int		i;

	i = 0;
	nb2 = n;
	res = malloc(sizeof(char) * (len_to_malloc(n) + 1));
	if (!res)
		return (NULL);
	if (nb2 < 0)
		nb2 *= -1;
	if (nb2 == 0)
	{
		res[i] = '0';
		res[i + 1] = '\0';
		return (res);
	}
	while (nb2)
	{
		res[i++] = nb2 % 10 + '0';
		nb2 /= 10;
	}
	if (n < 0)
		res[i] = '-';
	return (rev_str(res));
}
// #include <stdio.h>

// int main(void)
// {
//     char *res = ft_itoa(-42);
//     printf("%s\n", res);
//     free(res);
//     return (0);
// }
