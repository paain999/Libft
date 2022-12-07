#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int val;

    i = 0;
    sign = 1;
    val = 0;
    if (str == NULL)
        return (0);
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;    
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        val = val * 10 + (str[i] - 48);
        i++;
    }
    return (val * sign);
}
int main ( void )
{
    int ret;
    
    ret = ft_atoi("");
    printf("%i", ret);
     return 0 ;
}