/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrebs-l <lkrebs-l@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:01:18 by lkrebs-l          #+#    #+#             */
/*   Updated: 2021/10/20 20:56:01 by lkrebs-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *string, int c)
{
	if (*string == (char)c)
		return ((char *)string);
	else if (!*string)
		return (NULL);
	else
		return (ft_strchr(++string, c));
}

char	*ft_itoa_base(int num, int base)
{
	if (num < 0)
}

// num == -142

int	ft_putstr(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}