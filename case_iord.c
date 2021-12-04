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

int	case_iord(va_list *args)
{
	char	*str;
	int		count;

	str = ft_itoa(va_arg(*args, int));
	ft_putstr_fd(str, 1);
	count = ft_strlen(str);
	free(str);
	return (count);
}
