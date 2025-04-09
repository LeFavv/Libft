#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;

    if (!src || !dst)
    return (0);

    if (dst > src)
    {
        while (len)
        {
            ((char *)dst)[len - 1] = ((const char *)src)[len - 1];
            len--;
        }
    }
    else
    {
        i = 0;
        while (i < len)
        {
            ((char *)dst)[i] = ((const char *)src)[i];
            i++;
        }
    }
    return (dst);
}