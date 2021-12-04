/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:17:39 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:17:39 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digitshex(int n)
{
	int	dig;
	int	x;

	dig = 1;
	x = n;
	if (n >= 0)
	{
		while (x >= 16)
		{
			dig += 1;
			x /= 16;
		}
	}
	if (n < 0)
	{
		while (x <= -16)
		{
			dig += 1;
			x /= 16;
		}
	}
	return (dig);
}

static char	*stringcreatehex(int dig, int n, char *ptr, char *hexdig)
{
	ptr[dig] = 0;
	if (n < 0)
	{
		n += 1;
		while (dig > 0)
		{
			ptr[dig - 1] = hexdig[(15 - ((n % 16) * (-1)))];
			n /= 16;
			dig--;
		}
	}
	else
	{
		while (dig > 0)
		{
			ptr[dig - 1] = hexdig[(n % 16)];
			n /= 16;
			dig--;
		}
	}
	return (ptr);
}

char	*ft_createhex(int x)
{
	char	*res;
	int		dig;
	char	*hexdig;

	hexdig = "0123456789abcdef";
	dig = 8;
	if (x >= 0)
		dig = digitshex(x);
	res = malloc((dig + 1) * sizeof(char));
	res = stringcreatehex(dig, x, res, hexdig);
	return (res);
}
