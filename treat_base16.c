/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_base16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:01:12 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/10/21 19:09:449 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(va_list arg)
{
	int count;
	char *str;

	str = ft_itoa_base(arg, 16);
	count = ft_putstr(str);
	return (count);
}

int	ft_print_X(va_list arg)
{
	int count;
	char *str;
	int	i;

	str = ft_itoa_base(arg, 16);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'f')
			str[i] = str[i] - 32;
		i++;
	}
	count = ft_putstr(str);
	return (count);
}

int	ft_print_p(va_list arg)
{
	int		count;
	char	*str;

	ft_putstr("0x");
	count =
	str = ft_itoa_base(arg, 16);
	count = ft_putstr(str);
	return(count);
}