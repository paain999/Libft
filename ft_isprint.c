#include "libft.h"

int	ft_isprint(int c)
{
		if (c >= 32 && c <= 126)
			return (1);
		return(0);	
}
/*int main()
{
	int i;
	i = 0;
    while (i <= 47)
    {
        printf("%i",ft_isprint(i));
        i++;
    }
	return (0);
}*/