#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *s2;
    int i;

    i = 0;
    s2 = malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!s2)
        return (NULL);
    while (s1[i])
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return (s2);
}
// #include <stdio.h>

// int main(int argc, char **argv)
// {
//     char *s;
//     if (argc == 2)
//     {
//         s = ft_strdup(argv[1]);
//         printf("%s\n", s);
//         free (s);
//     }
//     return (0);
// }