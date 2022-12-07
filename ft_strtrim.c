#include "libft.h"

static int  ft_flag(char const *set, char c)
{
    int i;

    i = 0;
    while (set[i])
        if (set[i++] == c)
            return (1);
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int len;
    int i;
    int k;
    char *new;
    if(*s1 == '\0')
        return (NULL);
    k = 0;
    i = 0;
    len = ft_strlen(s1);
    while (s1[i] && ft_flag(set, s1[i]))
        i++;
    while (s1[len - 1] && ft_flag(set, s1[len - 1]))
        len--;
    if (len < i)
        len = i;
    new = (char *)malloc((len - i) + 1);
    if(new)
    {
        while (i < len)
            new[k++] = s1[i++];
        new[k] = '\0'; 
        return (new);  
    }
    return (NULL);
}

/* int main()
{
    char *r;

    r = ft_strtrim("@/Hola/@", "@/*&");
    printf("%s", r);
    free(r);
    return (0);
} */