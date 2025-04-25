/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:06 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/25 13:45:06 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	i;

	if (!src || (!dst && dstsize != 0))
		return (0);
	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);

	if (dstsize <= dst_size)
		return (src_size + dst_size);
	i = 0;
	while (i < (dstsize - dst_size - 1))
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = 0;
	return (dst_size + src_size);
}
