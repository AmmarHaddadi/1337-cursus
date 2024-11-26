#include "ft_printf.h"
#include <stdarg.h>
#include <stdlib.h>

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
			char *formatted = fsp(*(++str), args);
			if (!formatted)
				return -1;
			int write_ret = write(1, formatted, ft_strlen(formatted));
            free(formatted);
            if (write_ret < 0)
            {
                va_end(args);
                return (-1);
            }
            i += write_ret;
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


