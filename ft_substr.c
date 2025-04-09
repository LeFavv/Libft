#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *dest;
    int len_to_malloc;

    i= 0;
    while (s[i])
        i++;
    len_to_malloc = (i - start);
    if ((int)len >= len_to_malloc)
        dest = malloc(sizeof(char) * (len_to_malloc + 1));
    else
        dest = malloc(sizeof(char) * (len + 1));
    if (!dest)
        return (NULL);
    i = 0;
    while (s[start + 1])
    {
        dest[i] = s[start + i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}