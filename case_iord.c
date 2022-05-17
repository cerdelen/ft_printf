/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_iord.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:08:57 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:08:57 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(long int i)
{
	int		counter;


	if (i < 0)
		i = -i;
	counter = 0;	
	if (i >= 10)
		counter = print_int(i / 10);
	return (counter + write(1, &"0123456789"[i % 10], 1));
}


int	case_iord(va_list *args)
{
	return (print_int(va_args(args)));
}
