#include "ft_printf.h"
#include <stdarg.h>

int ft_printf(const char *str, ...)
{
	int i = 0;

	va_list args;
	va_start(args, str);

	if (!str || write(1, 0, 0) < 0)
		return -1;
	while (*str)
	{
		if (*str == '%')
		{
			int add = fsp(*(++str), args);
			if (add == -1)
				return -1;
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

