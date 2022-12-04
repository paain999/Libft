#include "libft.h"
#include <stdlib.h>

void* ft_calloc (size_t num, size_t size)
{
    void *p;
    
    p = malloc(num * size);
    ft_bzero(p, size);
}
int main()
{
    char *str = (char *)calloc(10, 10);
    printf("%d", *str);
    return (0);
}