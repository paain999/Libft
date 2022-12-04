#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t count;
    if((!dest && !src) || !len)
        return (NULL);
    if(dest == src)
        return (dest);
    if(dest > src)
    {
        while (len > 0)
        {
            ((char *)dest)[len - 1] = ((char *)src)[len - 1];
            len--;
        }
        
    }else
    {
        count = 0;
        while(count < len)
        {
            ((char *)dest)[count] = ((char *)src)[count];
            count++;
        }
    }
    return (dest);
}