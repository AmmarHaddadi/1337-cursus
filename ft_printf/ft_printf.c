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
            t_flags *flags = parse_flags(&str);
            if (!flags)
                return -1;
            char *formatted = fsp(flags->fsp, args);
            if (!formatted)
                return -1;
            char *flagged = apply_flags(formatted, flags);
            if (!flagged)
                return -1;
            int write_ret = write(1, flagged, ft_strlen(flagged));
            free(formatted);
			free(flagged);
			free(flags);
            if (write_ret < 0)
            {
                va_end(args);
                return (-1);
            }
            i += write_ret;
        }
        else
        {
			write(1, str, 1);
			i++;
        }
        str++;
    }

    va_end(args);
	return (i);
}
