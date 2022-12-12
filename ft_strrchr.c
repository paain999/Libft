/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:33:04 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/12 14:33:24 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = ft_strlen(str);
	while (count >= 0)
	{
		if (str[count] == c)
			return ((char *)&str[count]);
		count--;
	}
	if (c == '\0')
		return ((char *)&str[count]);
	return (NULL);
}
