#include "libft.h"

int ft_char_is_sep(char i, char c);
int ft_count_word(char const *s, char c);
char *ft_malloc(char const *s, int start, int end);
char **ft_split(char const *s, char c);
void ft_free_all(char **tab, int last);


int ft_char_is_sep(char i, char c)
{
     if (i == c)
            return 1;
    if (i == '\0')
        return 1;
    return 0;
}

int  ft_count_word(char const *s, char c)
{
    int i = 0;
    int word = 0;
    while (s[i])
    {
        if ((ft_char_is_sep(s[i + 1], c) == 1)
                && (ft_char_is_sep(s[i], c) == 0))
                word++;
        i++;
    }
    return word;
}
void ft_free_all(char **tab, int last)
{
    int i = 0;

    while (i < last)
    {
        free(tab[i]);
        i++;
    }
    return;
}
char *ft_malloc(char const *s, int start, int end)
{
    int range = end - start;
    int i = 0;
    char *res;

    res = malloc(sizeof(char) * (range + 1));
    if (!res)
        return NULL;
    while (i < range)
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = '\0';
    return res;
}

char **ft_split(char const *s, char c)
{
    int i_tab = 0;
    int start;
    char **tab = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
    if (!tab)
        return NULL;
    int i = 0;
    while (s[i])
    {
        while (s[i] && ft_char_is_sep(s[i], c))
            i++;
        start = i;
        while (s[i] && !ft_char_is_sep(s[i], c))
            i++;
        tab[i_tab] = ft_malloc(s, start, i);
        if (!tab[i_tab])
        {
            ft_free_all(tab, i_tab);
            return (NULL);
        }
        i_tab++;
    }
    tab[i_tab] = NULL;
    return (tab);
}

// #include <stdio.h>


// int main(void)
// {
//     char *test = "salut a tous";
//     char c = ' ';
//     char **tab = ft_split(test, c);
//     int i = 0;
//     while (tab[i])
//         printf("%s\n", tab[i++]);
//     ft_free_all(tab, i);
//     free(tab);

//     return (0);
// } 