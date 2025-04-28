/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:21 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 13:56:50 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(str + i) = (unsigned char)c;
		i++;
	}
	return ((void *)str);
}

// #include <stdio.h>
// #include <string.h>

// int main () 
// {
//    char str[50];

//    strcpy(str, "Welcome to Tutorialspoint");
//    puts(str);

//    ft_memset(str, '#', 7);
//    puts(str);
//    return(0);
// }