#include "ft_printf.h"

t_flags *init_flags(void)
{
    t_flags *flags;

    flags = malloc(sizeof(t_flags));
    if (!flags)
        return (NULL);
    flags->minus = 0;
    flags->zero = 0;
    flags->precision = 0;
    flags->width = 0;
    flags->hash = 0;
    flags->space = 0;
    flags->plus = 0;
    flags->fsp = 0;
    return (flags);
}

t_flags *parse_flags(const char *str)
{
    int size;
    t_flags *flags = init_flags();
    if (!flags)
        return NULL;

    while (*str && *str != 'c' && *str != 's' && *str != 'p' && *str != 'd' && *str != 'i' && *str != 'u' && *str != 'x' && *str != 'X')
    {
        size = 0;
        if (*str == '-')
            flags->minus = 1;
        else if (*str == '0')
        {
            flags->zero = 1;
        }
        else if (*str == '.')
        {
            size = ft_atoi(++str);
            flags->precision = size;
            str += tol_unsigned(size, 10);
            continue;
        }
        else if (*str == '#')
            flags->hash = 1;
        else if (*str == '+')
            flags->plus = 1;
        else if (*str == ' ')
            flags->space = 1;
        else if (ft_isdigit(*str))
        {
            size = ft_atoi(str);
            flags->width = size;
            str += tol_unsigned(size, 10);
            continue;
        }
        str++;
    }
    flags->fsp = *str;
    return flags;
}

char *flag_hash(char *str, char fsp)
{
	if (!str || !fsp)
		return NULL;

	char *prefix = "0x";
	if (fsp == 'X')
		prefix = "0X";
	char *new_str = ft_strjoin(prefix, str);
	return new_str;
}

char *flag_plus(char *str)
{
	if (!str)
		return NULL;
	if (str[0] != '-')
		return (ft_strjoin("+", str));
	else
		return ft_strdup(str);
}

char *flag_zero_width(char *str, int size, char filler)
{
	if (!str)
		return NULL;
	int s_len = ft_strlen(str);
	if (!size || s_len >= size)
		return ft_strdup(str);
	int needed = size - s_len;
	char *new_str = malloc(size + 1);
	if (!new_str)
		return NULL;
	ft_memset(new_str, filler, needed);
	ft_strlcpy(new_str + needed, str, size);
	return new_str;
}

char *flag_precision(char *str, t_flags *flags)
{
	if (flags -> fsp == 's')
		return ft_substr(str, 0, flags->precision);
	else
		return flag_zero_width(str, flags->precision, '0');
}

char *flag_minus(char *str, int size)
{
	if (!str)
		return NULL;
	int s_len = ft_strlen(str);
	if (!size || s_len >= size)
		return ft_strdup(str);
	int needed = size - s_len;
	char *new_str = malloc(size + 1);
	if (!new_str)
		return NULL;
	ft_strlcpy(new_str, str, s_len + 1);
	ft_memset(new_str + s_len, ' ', needed);
	new_str[size] = '\0';
	return new_str;
}

