/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:24:43 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/10/20 20:27:448 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(va_list arg)
{
	write(1, &arg, 1);
	return (1);
}

int	ft_print_s(va_list arg)
{
	int	count;

	count = 0;
	while (arg)
	{
		write(1, &arg, 1);
		arg++;
		count++;
	}
	return (count);
}