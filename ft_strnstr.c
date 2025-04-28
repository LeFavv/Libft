/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:29 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 14:16:55 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && (size_t)i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] && haystack[i + j] == needle[j])
				j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
//     if (argc == 4)
//     {
//         printf("%s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
//         printf("%s\n", strnstr(argv[1], argv[2], atoi(argv[3])));
//     }
//     return (0);
// }