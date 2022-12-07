#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t n)
{
    int len;
    int count;

    count = 0;
    len = n - start;
    char *dest = (char*)malloc(sizeof(char) * (len + 1));
    if(s == NULL)
        return (NULL);
    if(start > ft_strlen(s))
        return (NULL);
    while (len--)
    {
        dest[count++] = s[start++];
    }
    dest[count] = '\0'; 
    return (dest);
}
/* int main()
{
    char src[] = "substr function Implementation";
 
    int m = 7;
    int n = 15;
 
    char* dest = ft_substr(src, m, n);
 
    printf("%s\n", dest);
 
    return 0;
} */