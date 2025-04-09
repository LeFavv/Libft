#include "libft.h"

int ft_tolower(int character)
{
    if (character >= 65 && character <= 90)
        character += 32;
    return (character);
}
// #include <stdio.h>

// int main(void)
// {
//     char ch = 'C';

//     printf("%c going to a %c thanks to the tolower function\n", ch, ft_tolower(ch));
//     return (0);
// }