/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigneditoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:20:21 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:20:21 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digits(unsigned int n)
{
	int				dig;
	unsigned int	x;

	dig = 1;
	x = n;
	while (x >= 10)
	{
		dig += 1;
		x /= 10;
	}
	return (dig);
}

static char	*stringcreate(int dig, unsigned int n, char *ptr)
{
	ptr[dig] = 0;
	while (dig > 0)
	{
		ptr[dig - 1] = (n % 10) + 48;
		n /= 10;
		dig--;
	}
	return (ptr);
}

char	*ft_unsigneditoa(unsigned int n)
{
	int		dig;
	char	*ptr;

	dig = digits(n);
	ptr = malloc(dig + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr = stringcreate(dig, n, ptr);
	return (ptr);
}
