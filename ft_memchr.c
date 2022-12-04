#include "libft.h"

void *ft_memchr (const void *str, int c, size_t n)
{
    unsigned char *s;

    s = (unsigned char *)str;
    if(n)
    {
        while (n--)
        {
            if (*s++ == c)
                return (--s);
        }
    }
    return(NULL);
}

/* int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, ft_strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
} */