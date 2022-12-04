//#include <stdio.h>
#include "libft.h"

void    *ft_memset(void *src, int c, size_t len)
{
    size_t count;
    count = 0;

    while (count <= len - 1)
    {
        ((char *)src)[count] = c;
        count++;
    }
    return (src);
}

/* int main(void)
{
    char    example[10] = "Holamundo";
    ft_memset(example + 1, '#', 4);
    printf("%s", example);
    return (0);
} */