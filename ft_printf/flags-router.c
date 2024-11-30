#include "ft_printf.h"

// if conditions must be ordred right, sm flags don't execute when others r present in original printf
char *apply_flags(char *str, t_flags *flags)
{
    char *final_str = str;
    char *temp_str;

	if (flags->hash)
    {
        temp_str = final_str;
        final_str = flag_hash(final_str, flags->fsp);
        if (temp_str != str) free(temp_str);
    }
    if (flags->plus)
    {
        temp_str = final_str;
        final_str = flag_plus(final_str);
        if (temp_str != str) free(temp_str);
    }
    if (flags->precision)
    {
        temp_str = final_str;
        final_str = flag_precision(final_str, flags);
        if (temp_str != str) free(temp_str);
    }
    if (flags->minus)
    {
        temp_str = final_str;
        final_str = flag_minus(final_str, flags->width);
        if (temp_str != str) free(temp_str);
    }
    else if (flags->zero)
    {
        temp_str = final_str;
        final_str = flag_zero_width(final_str, flags->width, '0');
        if (temp_str != str) free(temp_str);
    }
    else if (flags->width)
    {
        temp_str = final_str;
        final_str = flag_zero_width(final_str, flags->width, ' ');
        if (temp_str != str) free(temp_str);
    }

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
