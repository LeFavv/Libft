#include "libft.h"
#include <stdlib.h>

int search_start(char const *s1, char const *set)
{
    int i;
    int j;
    int count;

    i = 0;
    while (s1[i])
    {
        j = 0;
        count = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
            {
                count++;
            }
            j++;
        }
        if (count == 0)
            return (i);
        i++;
    }
    return (i);
}

int search_end(char const *s1, char const *set)
{
    int i;
    int j;
    int count;

    i = 0;
    while (s1[i])
        i++;
    i -= 1;
    while (i >= 0)
    {
        j = 0;
        count = 0;
        while (set[j])
        {
            if (s1[i] == set[j])
            {
                count++;
            }
            j++;
        }
        if (count == 0)
            return (i);
        i--;
    }
    return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
    if (!s1)
        return (NULL);
    if (!set)
        return ((char *)s1);
    char *res;
    int start;
    int i;
    int end;

    start = search_start(s1, set);
    end = search_end(s1, set);
    i = 0;
    if (end < start)
    {
        res = malloc(1);
        res[0] = 0;
        return res;
    }
    res = malloc(sizeof(char) * ((end - start + 1) + 1));
    if (!res)
        return (NULL);
    while (i < (end - start + 1))
        res[i] = s1[start + i++];
    res[i] = 0;
    return (res);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        char *res = ft_strtrim(argv[1], argv[2]);
        printf("%s\n", res);
        free(res);
    }
    return (0);
}