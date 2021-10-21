/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_base10.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:01:10 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/10/20 20:48:293 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(va_list arg)
{
	int		count;
	char	*str;

	str = ft_itoa_base(arg, 10);
	count = ft_putstr(str);
	return (count);
}

int	ft_print_int(va_list arg)
{
	int		count;
	char	*str;

	str = ft_itoa_base(arg, 10);
	count = ft_putstr(str);
	return (count);
}
