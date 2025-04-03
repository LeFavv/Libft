#include <libft.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

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