/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:11:45 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/14 22:07:23 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_str(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if(s[i] != c)
			return (1);
		i++;
	}
	return (0);
}
static	int	nbrstr(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i + 1] != '\0' && s[i + 1] != c)
				counter++;
		}
		i++;
	}
	return (counter + 1);
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
		if (s[i] != c && s[i + 1] != '\0')
			count++;
		else if (s[i - 1] != c || s[i + 1] == '\0')
		{
			if (s[i] != c && s[i + 1] == '\0')
				count++;
			array[j] = malloc(sizeof(char) * (count + 1));
			if (!array[j])
				return (0);
			count = 0;
			j++;
		}
		i++;
	}
	return (array);
}

static	char	**copy(char **array, char const *s, char c, int nmstr)
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
			array[j][k++] = s[i];
			if (s[i + 1] == '\0')
				array[j][k] = '\0';
		}
		else if (s[i] == c && s[i - 1] != c)
		{
			array[j++][k] = '\0';
			k = 0;
		}
		i++;
	}
	array[nmstr] = (void *)0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int			nmstr;
	char		**array;
	char const	*new_str;

	if (!s || !*s)
	{
		array = malloc(sizeof(char *) * 1);
		if (!array)
			return (NULL);
		*array = (void *)0;
		return (array);
	}
	if(check_str(s, c)){
		new_str = ft_strtrim(s, (char const *)&c);
		nmstr = nbrstr(new_str, c);
		array = malloc((nmstr + 1) * sizeof(char *));
		if (array){
		if (mallocassign(array, new_str, c) != 0)
			return (copy(array, new_str, c, nmstr));
		else
			free (array);
		}
	}
	return ("");
}

/*int main()
{
    char **r;
	int i;

	i = 0;
    r = ft_split("        ", ' ');
	while (r[i])
	{
		printf("%s ", r[i]);
		i++;
	}
	free(r);
    return (0);
}*/
