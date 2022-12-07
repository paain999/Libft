#include "libft.h"

char    *ft_strdup(const char *s)
{
    char *copy;
    char *src;
    int i;

    i = 0;
    src = (char *)s;
    copy = (char *)malloc(ft_strlen(src) + 1);
    if(copy == NULL)
        return (NULL);
    while (src[i] != '\0')
    {
         copy[i] = src[i];
         i++;
    }
    copy[i] = '\0';
    return(copy);
}  

/* int main()
{
    char source[] = "GeeksForGeeks";
 
    char *target = ft_strdup(source);

    printf("%s", target);
    free(target);
    return 0;
} */