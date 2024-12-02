#include "ft_printf.h"

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
			++str;
            t_flags *flags = parse_flags(&str);
            if (!flags)
                return -1;
            char *formatted = fsp(flags->fsp, args, &i);
            if (!formatted)
                return -1;
            char *flagged = apply_flags(formatted, flags);
            if (!flagged)
                return -1;
            int write_ret = write(1, flagged, ft_strlen(flagged));
			free(flagged);
			free(flags);
            i += write_ret;
        }
        else
			i += write(1, str, 1);
        str++;
    }

    va_end(args);
	return (i);
}
