/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:50 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 14:11:08 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc == 3)
//     {
//         printf("%s\n", ft_strchr(argv[1], atoi(argv[2])));
//         printf("%s\n", strchr(argv[1], atoi(argv[2])));
//     }
//     return (0);
// }