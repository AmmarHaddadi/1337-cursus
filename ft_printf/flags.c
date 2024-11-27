#include "ft_printf.h"

t_flags	*init_flags(void)
{
	t_flags	*flags;

	flags = malloc(sizeof(t_flags));
	if (!flags)
		return (NULL);
	flags->minus = NULL;
    flags->zero = NULL;
    flags->precision = NULL;
    flags->width = NULL;
    flags->hash = NULL;
    flags->space = NULL;
    flags->plus = NULL;
	return (flags);
}

// wt if this pareses everything
// i mean add a property for "fs" bash ndir ghir loop we7da f ft_printf
const char *parse_flags(const char *str)
{
    t_flags *flags = init_flags();

    while (*str)
    {
        if (*str == '-')
            flags->minus = 1;
        else if (*str == '+')
            flags->plus = 1;
        else if (*str == '0')
            flags->zero = 1;
        else if (*str == '#')
            flags->hash = 1;
        else if (*str == ' ')
            flags->space = 1;
        else if (*str == '.')
        {
            flags->dot = 1;
            str++;
            flags->precision = ft_atoi(str);
            while (ft_isdigit(*str))
                str++;
            continue;
        }
        else if (ft_isdigit(*str))
        {
            flags->width = ft_atoi(str);
            while (ft_isdigit(*str))
                str++;
            continue;
        }
        else
            break;
        str++;
    }
    return str;
}
