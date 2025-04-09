#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char ch;

    i = 0;
    ch = (char)c;
    if (!s)
        return (NULL);
    while (s[i])
    {
        if (s[i] == ch)
            return ((char *)&s[i]);
        i++;
    }
    return (NULL);
}
// #include <string.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     if (argc == 3)
//     {
//         printf("%s\n", ft_strchr(argv[1], atoi(argv[2])));
//         printf("%s\n", strchr(argv[1], atoi(argv[2])));
//     }
//     return (0);
// }