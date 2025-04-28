/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:45:48 by vafavard          #+#    #+#             */
/*   Updated: 2025/04/28 14:20:46 by vafavard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper( int character )
{
	if (character >= 97 && character <= 122)
		character -= 32;
	return (character);
}
// #include <stdio.h>

// int main()
// {
//     char ch;

//     ch = 'g';
//     printf("%c in uppercase is represented as  %c",
//            ch, ft_toupper(ch));

//     return 0;
// }