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
	{
		char *x = va_arg(args, char *);
		if (!x)
			x = "(null)";
		ft_putstr_fd(x, 1);
		return ft_strlen(x);
	}
	else if (fs == 'p')
	{
		return print_address(va_arg(args, void *));
	}
	else if (fs == 'i' || fs == 'd')
	{
		char *n = ft_itoa(va_arg(args, int));
		ft_putstr_fd(n, 1);
		int len = ft_strlen(n);
		free(n);
		return len;
	}
	else if (fs == 'u')
	{
		unsigned int num = va_arg(args, unsigned int);
		put_unsigned(num);
		return tol_unsigned(num);
	}
	else if (fs == 'x' || fs == 'X')
	{
		return print_16(va_arg(args, unsigned int), fs);
	}
	return (0);
}
