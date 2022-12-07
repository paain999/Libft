#include "libft.h"

char    *ft_srtjoin(char const *s1, char const *s2)
{
    char *result;
    int newLen;
    int i;
    int j;
    
    i = 0;
    j = 0;
    if(*s1 == '\0' && *s2 == '\0')
        return(NULL);
    newLen = ft_strlen(s1) + ft_strlen(s2);
    result = (char *)malloc(sizeof(char) * newLen + 1);
    if(result)
    {
         while(i <= newLen && s1[i] != '\0')
         {
            result[i] = s1[i];
            i++;
         }
         while (i <= newLen && s2[j] != '\0')
            result[i++] = s2[j++];
        result[i] = '\0';
        return (result);
    }
    return (NULL);
}

/* int main()
{
    char    *r;

    r = ft_srtjoin("Hola", " Mundo");

    printf("%s", r);
    free(r);
    return (0);
} */