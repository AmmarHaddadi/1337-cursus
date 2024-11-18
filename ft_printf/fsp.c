// format specifiers logic
#include "ft_printf.h"
#include <stdlib.h>

int fsp(char fs, va_list args)
{
	if (fs == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	else if (fs == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (fs == 's')
		return print_s(va_arg(args, char *));
	else if (fs == 'p')
		return print_p(va_arg(args, void *));
	else if (fs == 'i' || fs == 'd')
		return print_di(va_arg(args, int));
	else if (fs == 'u')
	{
		unsigned int num = va_arg(args, unsigned int);
		print_u(num);
		return tol_unsigned(num, 10);
	}
	else if (fs == 'x' || fs == 'X')
		return print_x(va_arg(args, unsigned int), fs);
	return (0);
}
