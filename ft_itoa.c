/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:54:59 by dajimene          #+#    #+#             */
/*   Updated: 2022/12/19 21:34:00 by dajimene         ###   ########.fr       */
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
	int i;
	int	nbr;

	nbr = n;
	i = 0;
	if (n < 0)
	{
		nbr *= -nbr;
		str[i] = '-';
		i++;
	}
	if(nbr >= 0 && n <= 9)
		str[i] = n + 48;
	if(nbr > 9)
	{
			cast(nbr/10, len, str);
			cast(nbr%10, len, str);	
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	//int		isneg;
	char	*str;

	len = lenght((long int)n);
	str = malloc(len + 1 * sizeof(char));
	if (!str)
		return (0);
	cast(n, len, str);
	str[len] = '\0';
	return (str);
}

int main()
{
	char *n;
	
	n = ft_itoa(-28);
	printf("%s", n);
	return (0);
}
