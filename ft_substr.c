/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:41 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/29 10:07:39 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*dest;
	size_t		len_to_malloc;

	i = 0;
	if (!s)
		return (NULL);
	len_to_malloc = (ft_strlen(s) - start);
	if (start >= ft_strlen(s))
	{
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		return (dest[0] = '\0', dest);
	}
	if (len >= len_to_malloc)
		dest = malloc(sizeof(char) * (len_to_malloc + 1));
	else
		dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[start + i] && (i < len))
		dest[i] = s[start + i], i++;
	return (dest[i] = '\0', dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*test = "leo le boss";
// 	char	*result = ft_substr(test, 4, 5);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
