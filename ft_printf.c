/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:19:13 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:19:13 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	distributor(char c, va_list *args)
{
	int			count;

	count = 0;
	if (c == 'c')
		count = case_c(args);
	else if (c == 's')
		count = case_s(args);
	else if (c == '%')
		count = case_pro();
	else if (c == 'd' || c == 'i')
		count = case_iord(args);
	else if (c == 'u')
		count = case_u(args);
	else if (c == 'p')
		count = case_p(args);
	else if (c == 'x')
		count = case_x(args);
	else if (c == 'X')
		count = case_xup(args);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;
	int			ind;

	count = 0;
	ind = 0;
	va_start(args, format);
	while (format[ind])
	{
		if (format[ind] == '%')
			count += distributor(format[ind + 1], &args);
		if (format[ind] == '%')
			ind += 2;
		else
		{
			ft_printchar_fd(format[ind], 1);
			count++;
			ind++;
		}
	}
	va_end(args);
	return (count);
}
