/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:44:04 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/25 13:44:05 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;

    while ((*(const char *)s1) && (*(const char *)s2) && (i < n))
    {
        if ((*(const char *)(s1 + 1)) != (*(const char *)(s2 + i)))
            return ((*(const char *)(s1 + 1)) - (*(const char *)(s2 + i)));
        i++;
    }
    return ((*(const char *)(s1 + 1)) - (*(const char *)(s2 + i)));
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//    int arr1[] = {1, 2, 3, 4, 6};
//    int arr2[] = {1, 2, 3, 4, 6};

//    int result = memcmp(arr1, arr2, sizeof(arr1));

//    if (result == 0) {
//        printf("Arrays are equal\n");
//    } else {
//        printf("Arrays are not equal\n");
//    }
//     return 0;
// }