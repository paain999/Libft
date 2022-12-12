/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:11:45 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/12 15:49:20 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nbrstr(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			if (s[i + 1] != '\0')
				counter++;
		i++;
	}
	return (counter + 1);
}

static	char	**mallocassign(char **strings, char const *s, char c)
{
	int	count;
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
			if (s[i] != c && s[i + 1] == '\0')
				count++;
			strings[j] = malloc(sizeof(char) * (count + 1));
			if (!strings[j])
				return (0);
			count = 0;
			j++;
		}
		i++;
	}
	return (strings);
}

static	char	**divide(char **strings, char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			strings[j][k++] = s[i];
			if (s[i + 1] == '\0')
				strings[j][k] = '\0';
		}
		else if (s[i] == c)
		{
			strings[j++][k] = '\0';
			k = 0;
		}
		i++;
	}
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	int		nmstr;
	char	**strings;

	if (*s == '\0' || c == '\0')
		return (0);
	nmstr = nbrstr(s, c);
	strings = malloc((nmstr + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	if (mallocassign(strings, s, c) != 0)
		divide(strings, s, c);
	else
	{
		free(strings);
		return (NULL);
	}
	strings[nmstr] = (void *)0;
	return (strings);
}
/*int main()
{
    char **r;
	int i;

	i = 0;
    r = ft_split("Hola_soy_David_J.",'_');
	while (i < 4)
		printf("%s ", r[i++]);
	free(r);
    return (0);
}*/
