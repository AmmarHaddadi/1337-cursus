#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	int i = 0;

	va_list args;
	va_start(args, str);

	while (*str)
	{
		// if (*str == '%' && (*str + 1) != '\0')
		if (*str == '%')
		{
			str++;
			int add = fsp(*str, args);
			i += add;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			i++;
		}
		str++;
	}

	va_end(args);
	return (i);
}
