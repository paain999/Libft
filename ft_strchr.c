/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:24:33 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/12 14:24:34 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] == c)
			return ((char *)&str[count]);
		count++;
	}
	if (c == '\0')
		return ((char *)&str[count]);
	return (NULL);
}
