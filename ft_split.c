/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:11:45 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/15 12:04:23 by dajimene         ###   ########.fr       */
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
		if (s[i - 1] == c && i > 0)
			count++;
		i++;
	}
	if (s[0] != c)
		count++;
	if (count == 0 && s[i - 1] == c)
		return (0);
	return (count);
}

static	char	**mallocassign(char **array, char const *s, char c)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		else if (s[i - 1] != c && i > 0)
		{
			array[j++] = (char *)malloc(sizeof(char) *(count + 1));
			if (!array)
				return (0);
			count = 0;
		}
		if (s[i + 1] == '\0' && s[i] != c)
		{
			array[j] = (char *)malloc(sizeof(char) * (count + 1));
			if (!array)
				return (0);
		}
		i++;
	}
	return (array);
}

static	char	**copy(char **array, char const *s, char c)
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
			array[j][k++] = s[i];
		else if (s[i - 1] != c && i > 0)
		{
			array[j++][k] = '\0';
			k = 0;
		}
		if (s[i + 1] == '\0' && s[i] != c)
			array[j][k] = '\0';
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int			nmstr;
	char		**array;

	if (!s || !*s)
	{
		array = malloc(sizeof(char *) * 1);
		if (!array)
			return (NULL);
		*array = (void *)0;
		return (array);
	}
	nmstr = nbrstr(s, c);
	array = malloc((nmstr + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (mallocassign(array, s, c) != 0)
		copy(array, s, c);
	else
	{
		free(array);
		return (NULL);
	}
	array[nmstr] = (void *)0;
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
