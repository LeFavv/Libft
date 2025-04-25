/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:33 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/25 13:45:33 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
 
int main()
{
     // initializing string
     char str[] = "GeeksforGeeks";
 
     // character to be searched
     char chr = 'k';
 
     // Storing pointer returned by
     char* ptr = ft_strrchr(str, chr);
 
     // getting the position of the character
     if (ptr) {
         printf("Last occurrence of %c in %s is at index %ld",
                chr, str, ptr - str);
     }
     // condition for character not present
     else {
         printf("%c is not present in %s ", chr, str);
     }
     return 0;
 }*/
