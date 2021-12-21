/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 20:22:49 by Cerdelen          #+#    #+#             */
/*   Updated: 2021/12/04 20:22:49 by Cerdelen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdlib.h>

# include <unistd.h>

# include <stdarg.h>

char	*ft_itoa(int n);
void	ft_printchar_fd(int c, int fd);
int		ft_printstr_fd(char *s, int fd);
char	*ft_unsigneditoa(unsigned int n);
char	*ft_createhex(int x);
char	*ft_stringtoupper(char *str);
int		ft_printf(const char *format, ...);
char	*createaddrstr(void *ptr);
int		ft_strlen(const char *s);
int		case_c(va_list *args);
int		case_iord(va_list *args);
int		case_p(va_list *args);
int		case_pro(void);
int		case_s(va_list *args);
int		case_u(va_list *args);
int		case_x(va_list *args);
int		case_xup(va_list *args);

#endif