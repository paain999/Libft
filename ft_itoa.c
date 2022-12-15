/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:54:59 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/15 19:02:28 by dajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lenght(long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 1)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static	char	*cast(int n, int len, char *str)
{
}

char	*ft_itoa(int n)
{
	int		len;
	int		isneg;
	char	*str;

	len = lenght((long int)n);
	str = ft_calloc(len, sizeof(char));
	if (!str)
		return (0);
	return (str);
}
