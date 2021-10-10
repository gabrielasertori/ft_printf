#include <stdio.h>
#include <stdarg.h>

void	print_numbers(int n, ...)
{
	va_list list;

	va_start(list, n);

	for (int i = 0; i < n; i++)
	{
		int	value = va_arg(list, int);
		printf("%d: %d", i, value);
	}

	va_end(list);
}

int	main(void)
{
	print_numbers(2, 2, 2);
	return (0);
}