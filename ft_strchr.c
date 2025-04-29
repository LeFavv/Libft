/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:50 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 19:41:45 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	size_t	i;


	i = 0;
	len = ft_strlen(s) + 1;
	while (i < len)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char *test = "salut a tous les amis";
// 	int c = 116;

// 	printf("%s\n", strchr(test, c));
// 	printf("%s\n",ft_strchr(test, c));
// 	return (0);
// }