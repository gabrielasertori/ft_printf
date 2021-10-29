#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"


int	main(void)
{
	int a, b;
	a = ft_printf("FT: %X\n", -214748364);
	b = printf("FT: %X\n", -214748364);
	printf("LEN: %d\nLEN: %d\n", a, b);
	return (0);
}