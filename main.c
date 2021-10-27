#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"


int	main(void)
{
	int a, b;
	a = ft_printf("%p %p\n", -922337203685477580, 9223372036854775807);
	b = printf("%p %p\n", -922337203685477580, 9223372036854775807);
	printf("%d\n%d", a, b);
	return (0);
}