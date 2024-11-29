#include "ft_printf.h"

// if conditions must be ordred right, sm flags don't execute when others r present in original printf
char *apply_flags(char *str, t_flags *flags)
{
	char *final_str = str;
	if (flags -> hash)
		final_str = flag_hash(final_str, flags->fsp);
	if (flags -> plus)
		final_str = flag_plus(final_str);
	if (flags -> zero)
		final_str = flag_zero_width(final_str, flags->width, '0');
	else if (flags -> width)
		final_str = flag_zero_width(final_str, flags->width, ' ');
	if (flags -> precision)
		final_str = flag_precision(final_str, flags);

	return final_str;
}

void    print_flags(t_flags *flags)
{
    if (!flags)
    {
        printf("\nFlags struct is NULL\n");
        return;
    }

    // printf("\n=== FLAGS DEBUG ===\n");
    printf("Format specifier: %15c\n", flags->fsp);
    printf("Width: %24d\n", flags->width);
    printf("Precision: %20d\n", flags->precision);
    printf("Minus flag: %20d\n", flags->minus);
    printf("Zero flag: %21d\n", flags->zero);
    printf("Hash flag: %21d\n", flags->hash);
    printf("Space flag: %20d\n", flags->space);
    printf("Plus flag: %21d\n", flags->plus);
    // printf("==================\n");
}
