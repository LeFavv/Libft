int ft_toupper( int character )
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