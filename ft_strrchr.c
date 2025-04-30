/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:33 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/30 10:37:24 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	if (s[0] == (char)c)
		return ((char *)&s[0]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *test = "salut a tous les amis";
// 	int c = 116;

// 	printf("%s\n", strrchr(test, c));
// 	printf("%s\n",ft_strrchr(test, c));
// 	return (0);

// }
