#include "ft_printf.h"

char *apply_flags(char *str, t_flags *flags)
{
	char *final_str = str;
	if (flags -> hash)
		final_str = flag_hash(final_str, flags->fsp);

	return final_str;
}

// void    print_flags(t_flags *flags)
// {
//     if (!flags)
//     {
//         printf("\nFlags struct is NULL\n");
//         return;
//     }

//     // printf("\n=== FLAGS DEBUG ===\n");
//     printf("Format specifier: %15c\n", flags->fsp);
//     printf("Width: %24d\n", flags->width);
//     printf("Precision: %20d\n", flags->precision);
//     printf("Minus flag: %20d\n", flags->minus);
//     printf("Zero flag: %21d\n", flags->zero);
//     printf("Hash flag: %21d\n", flags->hash);
//     printf("Space flag: %20d\n", flags->space);
//     printf("Plus flag: %21d\n", flags->plus);
//     // printf("==================\n");
// }
