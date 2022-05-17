/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_xup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:12:00 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:12:00 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(int i)
{
	int		counter;

	counter = 0;	
	if (i >= 16)
		counter = print_hex(i / 16);
	return (counter + write(1, &"0123456789ABCDEF"[i % 16], 1));
}

int	case_xup(va_list *args)
{
	return (print_hex(va_arg(args)));
}
