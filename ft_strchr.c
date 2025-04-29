/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:50 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/29 21:07:29 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	if (!((char *)dest) && !((char *)src))
		return (0);
	if (dest > src)
	{
		while (length > 0)
		{
			((char *)dest)[length - 1] = ((char *)src)[length - 1];
			length--;
		}
	}
	else
		ft_memcpy(((char *)dest), ((char *)src), length);
	return (((char *)dest));
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