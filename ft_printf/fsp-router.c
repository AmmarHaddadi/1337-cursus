#include "ft_printf.h"
#include <stdlib.h>

char	*fsp(char fs, va_list args, int *i)
{
	if (fs == '%')
		return(ft_strdup("%"));
	else if (fs == 'c')
	{
		int c = va_arg(args, int);
		if (c == 0)
			*i += 1;
		return format_c(c);
	}
	else if (fs == 's')
		return format_s(va_arg(args, char *));
	else if (fs == 'p')
		return format_p(va_arg(args, void *));
	else if (fs == 'i' || fs == 'd')
		return format_di(va_arg(args, int));
	else if (fs == 'u')
		return format_u(va_arg(args, unsigned int));
	else if (fs == 'x' || fs == 'X')
		return convert2hex(va_arg(args, unsigned int), fs);
	return NULL;
}
