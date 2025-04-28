/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:09 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 13:55:33 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	while ((*(char *)(dst)) && (*(char *)(src)) && i < n)
	{
		(*(char *)(dst + i)) = (*(char *)(src + i));
		i++;
	}
	return ((void *)dst);
}
// #include <stdio.h>
// #include <string.h>
// #define MAX_CHAR 100
// int main() 
// {
// 	char first_str[MAX_CHAR] = "Hello World!";
// 	char second_str[MAX_CHAR] = "Welcome to Tutorialspoint";

// 	printf("The Actual Statements:-\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);

// 	//copying all bytes of second_str to first_str
// 	memcpy(first_str, second_str, strlen(second_str));

// 	printf("After executing the function memcpy()\n");
// 	printf("first_str: %s\n", first_str);
// 	printf("second_str: %s\n", second_str);
// 	return 0;
// }