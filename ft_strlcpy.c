#include "libft.h"

size_t  strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t src_len;
    size_t  i;

    if (!src || (!dst && dstsize != 0))
        return (0);
    
    src_len = ft_strlen(src);

    if (dstsize != 0)
    {
        i = 0;
        while (src[i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = 0;
    }
    return (src_len);
}