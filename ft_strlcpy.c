/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:32:13 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/12 14:32:13 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (!dest || !src)
		return (0);
	if (!size)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	if (size < src_len)
		dest[size] = '\0';
	else if (size != 0)
		dest[i] = '\0';
	return (src_len);
}
