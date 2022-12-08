#include "libft.h"

static int nbrStr(char const *s, char c)
{
    int i;
    int counter;

    counter = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            if(s[i + 1] != '\0')
                counter++;
        i++;
    }
    return (counter + 1);
}

char	**mallocAssign(char **strings, char *s, char c)
{
	int count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] != '\0')
			count++;
		else
		{
			if(s[i] != c && s[i + 1] == '\0')
				count++;
			strings[j] = malloc(sizeof(char) * (count + 1));
			count = 0;
			if(s[i + 1] == '\0')
				return (strings);
			j++;
		}
		i++;
	}
	
}

char **ft_split(char const *s, char c)
{
    int numbstr;
	char	**strings;

    if(*s == '\0' || c == '\0')
        return (NULL);
    numbstr = nbrStr(s,c);
	strings = malloc((numbstr + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	strings[numbstr] = (void *)0;
	return(strings);
}

int main()
{
    int r;

    r = ft_split("hola_mundo",'_');
    return (0);
}