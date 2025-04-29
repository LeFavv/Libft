/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:06 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/29 13:12:22 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t res_size)
{
	size_t	src_size;
	size_t	dst_size;
	size_t	i;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	i = 0;
	if (dst_size < res_size - 1 && res_size > 0)
	{
		while (src[i] && dst_size + i < res_size - 1)
		{
			dst[dst_size + i] = src[i];
			i++;
		}
		dst[dst_size + i] = '\0';
	}
	if (dst_size >= res_size)
		dst_size = res_size;
	return (dst_size + src_size);
}
