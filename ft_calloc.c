#include "libft.h"
#include <stdlib.h>
#include <stddef.h> //a supprimer apres

void *ft_calloc(size_t count, size_t size)
{
    char *str;
    size_t  i;

    i = 0;
    //on peut rajouter une ligne pour verif que count * size n'est pas > a SIZE_MAX
    str = malloc(sizeof(char) * (count * size));
    if (!str)
        return (NULL);
    while (i < (count * size))
    {
        str[i] = 0;
        i++;
    }
    return ((void *)str);
}