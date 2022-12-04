#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  destLen;
    size_t  srcLen;
    size_t count;

    destLen = ft_strlen(dest);
    srcLen = ft_strlen(src);
    if (size <= destLen)
        return (srcLen + size);
    count = destLen;
    while (*src != '\0' && count < (size - 1))
        *(dest + count++) = *src++;
    *(dest + count) = '\0';
    return (destLen + srcLen);
}

/* int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    char buffer[16];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,16);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > 16 )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
} */