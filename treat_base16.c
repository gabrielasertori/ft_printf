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

int	ft_print_x(unsigned int hex)
{
	int count;
	char *str;

	str = ft_itoa_base(hex, 16);
	count = ft_putstr(str);
	free(str);
	return (count);
}

int	ft_print_X(unsigned int hex_upper)
{
	int count;
	char *str;
	int	i;

	str = ft_itoa_base(hex_upper, 16);
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'f')
			str[i] = str[i] - 32;
		i++;
	}
	count = ft_putstr(str);
	free(str);
	return (count);
}

int	ft_print_p(unsigned long pointer)
{
	int		count;
	char	*str;

	ft_putstr("0x");
	count = 2;
	str = ft_itoa_base(pointer, 16);
	count += ft_putstr(str);
	free(str);
	return(count);
}