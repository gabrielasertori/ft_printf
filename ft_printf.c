/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:34:07 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/10/20 19:43:527 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_parameter(const char *str, va_list arg);

int	ft_printf(const char *str, ...)
{
	int count;
	va_list args;

	va_start(args, str);
	count = 0;
	while (str)
	{
		if (*str == '%' && *str + 1 == ft_strchr(str, "cspudixX%"))
		{
			str++;
			count = count + ft_check_parameter(&str, args);
		}
		else
		{
			write(1, &str, 1);
			count++;
		}
		str++;
	}

	va_end(args);
	return (count);
}

int	ft_check_parameter(const char *str, va_list arg)
{
	int count;

	count = 0;
	if (str == 'c')
		count = ft_print_c(va_arg(arg, int));
	else if (str == 's')
		count = ft_print_s(va_arg(arg, char *));
	else if (str == 'd' || str == 'i')
		count = ft_print_int(va_arg(arg, int));
	else if (str == 'u')
		count = ft_print_u(va_arg(arg, unsigned int));
	else if (str == 'p')
		count = ft_print_p(va_arg(arg, unsigned int));
	else if(str == 'x')
		count = ft_print_x(va_arg(arg, unsigned int));
	else if (str == 'X')
		count = ft_printf_X(va_arg(arg, unsigned int));
	else
	{
		count++;
		write(1, '%', 1);
	}
	return (count);
}
