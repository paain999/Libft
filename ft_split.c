#include "libft.h"

static int nbrStr(char const *s, char c)
{
    int i;
    int counter;

    counter = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            if(s[i + 1] != '\0')
                counter++;
        i++;
    }
    return (counter + 1);
}

static	char	**mallocAssign(char **strings, char const *s, char c)
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
			if(!strings[j])
				return (0);
			if(s[i + 1] == '\0')
				return (strings);
			count = 0;
			j++;
		}
		i++;
	}
	return(0);
}

static	char	**divide(char **strings, char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c){
			strings[j][k++] = s[i];
			if(s[i + 1] == '\0')
				strings[j][k] = '\0';
		}
		else if(s[i] == c)
		{
			strings[j][k] = '\0';
			j++;
			k = 0;
		}
		i++;
	}
	return (strings);
}

char **ft_split(char const *s, char c)
{
    int nbrstr;
	char	**strings;
	//char const	*str;
    if (*s == '\0' || c == '\0'){
        return (NULL);
	}
	//str = ft_strtrim(s, (char const *)c);
    nbrstr = nbrStr(s, c);
	strings = malloc((nbrstr + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	if (mallocAssign(strings, s, c) != 0)
		divide(strings, s, c);
	else
	{
		free(strings);
		return (NULL);
	}
	strings[nbrstr] = (void *)0;
	return (strings);
}

/* int main()
{
    char **r;
	int i;

	i = 0;
    r = ft_split("Hola_soy_David_J.",'_');
	while (i < 4)
		printf("%s ", r[i++]);
	free(r);
    return (0);
} */