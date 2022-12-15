/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:51:42 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/12 19:59:24 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) && start == 0)
		dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	else
		dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int main()
{
    char src[] = "substr function Implementation";
 
    int m = 7;
    int n = 15;
 
    char* dest = ft_substr(src, m, n);
 
    printf("%s\n", dest);
 
    return 0;
} */
