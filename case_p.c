/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:10:08 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:10:08 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_p(va_list *args)
{
	char	*str;
	void	*ptr;
	int		count;

	ptr = va_arg(*args, void *);
	write(1, "0x", 2);
	if (ptr)
		str = createaddrstr(ptr);
	else
		str = "0";
	ft_printstr_fd(str, 1);
	count = 2 + ft_strlen(str);
	if (ptr)
		free(str);
	return (count);
}
