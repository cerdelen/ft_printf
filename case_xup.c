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

int	case_xup(va_list *args)
{
	char	*str;
	int		count;

	str = ft_createhex(va_arg(*args, int));
	str = ft_stringtoupper(str);
	ft_printstr_fd(str, 1);
	count = ft_strlen(str);
	free(str);
	return (count);
}
