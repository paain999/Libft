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
	int		count;
	char	*dest;

	count = 0;
	dest = (char *)malloc(len + 1);
	if (!s || !dest)
	{
		free(dest);
		return (NULL);
	}
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (len--)
		dest[count++] = s[start++];
	dest[count] = '\0';
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
