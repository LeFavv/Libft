/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:26 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 14:16:14 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && (size_t)i < n)
		i++;
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
//     if (argc == 4)
//     {
//         int result;	
//         result = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
//         printf("%d\n", result);
//     }
//     return (0);
// }