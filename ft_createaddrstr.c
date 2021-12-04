/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createaddrstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:12:39 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:12:39 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*createaddrstr(void *ptr)
{
	unsigned long int	div;
	char				temp;
	unsigned long int	addr;
	int					count;
	char				*str;

	str = calloc (20, sizeof(char));
	addr = (unsigned long int)ptr;
	div = 1;
	count = 0;
	while ((addr / div >= 16) && addr >= 16)
		div *= 16;
	while (div > 0)
	{
		temp = (addr / div) + '0';
		if (temp > '9')
			temp += 39;
		str[count++] = temp;
		addr %= div;
		div /= 16;
	}
	return (str);
}
