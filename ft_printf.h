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
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_check_parameter(char c, va_list arg);
int		ft_putstr(const char *str);
char	*ft_strchr(const char *string, int c);
char	*ft_itoa_base(long num, int base);
size_t	ft_strlen(const char *string);
char	*ft_strdup(const char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_print_c(int c);
int		ft_print_s(char *str);
int		ft_print_int(int decimal);
int		ft_print_u(unsigned int num);
int		ft_print_p(unsigned int pointer);
int		ft_print_x(unsigned int hex);
int		ft_print_X(unsigned int hex_upper);


#endif