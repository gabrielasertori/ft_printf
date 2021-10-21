/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:01:15 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/10/21 18:42:548 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>

char	*ft_strchr(const char *string, int c);
char	*ft_itoa_base(long num, int base);
int		ft_print_c(va_list arg);
int		ft_print_s(va_list arg);
int		ft_print_int(va_list arg);
int		ft_print_u(va_list arg);
int		ft_print_p(va_list arg);
int		ft_print_x(va_list arg);
int		ft_printf_X(va_list arg);
int		ft_check_parameter(const char c, va_list arg);

#endif