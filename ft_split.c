/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:11:45 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/15 19:14:28 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nbrstr(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (i > 0)
		{
			if (s[i - 1] == c)
				count++;
		}
		if(s[i])
			i++;
	}
	if (s[0] != c && count == 0)
		count++;
	if (count == 0 && s[i - 1] == c)
		return (0);
	return (count);
}

static	size_t	word_len(char const *s, char c, int count)
{
}

char	**ft_split(char const *s, char c)
{
	int			nmstr;
	char		**array;
	size_t		len;
	int	pos;
	int count;
	

	if (!s || !*s)
	{
		array = malloc(sizeof(char *) * 1);
		if (!array)
			return (NULL);
		*array = (void *)0;
		return (array);
	}
	pos = 0;
	count = 0;
	nmstr = nbrstr(s, c);
	if (!nmstr)
		return (NULL);
	array = malloc((nmstr + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (pos < nmstr)
	{
		while (s[count] == c)
			count++;
		len = word_len(s, c, count);
		array[pos] = ft_substr(s, count, len)
		
	}
	
	return (array);
}

/*int main()
{
    char **r;
	int i;

	i = 0;
    r = ft_split("hello!zzzzzzzz", 'z');
	while (r[i])
	{
		printf("%s ", r[i]);
		i++;
	}
	free(r);
    return (0);
}*/
