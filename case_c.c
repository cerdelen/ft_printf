/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:08:47 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:08:47 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	case_c(va_list *args)
{
	ft_printchar_fd(va_arg(*args, int), 1);
	return (1);
}
