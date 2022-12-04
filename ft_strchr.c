#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    int count;
    int stop;

    count = 0;
    stop = 0; 
    while (str && stop == 0)
    {
        if(str[count] == c)
        {
            return((char *)&str[count]);
            stop = 1;
        }
        count++;
    }
    if(c == '\0')
        return ((char *)&str[count]);
    return (NULL);
}