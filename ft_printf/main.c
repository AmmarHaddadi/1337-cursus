#include "lib.h"
#include <stdarg.h>


int ft_printf(const char *str, ...) {
  int i = 0;
  va_list args;
  va_start(args, str);

  while (*str) {
    if (*str == '%' && (*str + 1) != '\0') {
      str++;
      // %%
      if (*str == '%') {
        ft_putchar_fd('%', 1);
      }
      // %c
      else if (*str == 'c') {
	      ft_putchar_fd(va_arg(args, int), 1);
      }
      // %s
      else if (*str == 's') {
	      ft_putstr_fd(va_arg(args, char *), 1);
      }
      // %p
      else if (*str == 'p') {
      }
      // %i || %d
      else if (*str == 'i' || *str == 'd') {
      	ft_putnbr_fd(va_arg(args, int), 1);
      }
      // %u
      else if (*str == 'u') {
      	put_unsigned(va_arg(args, unsigned int));
      }
      // %x
      else if (*str == 'x') {
      }
      // %X
      else if (*str == 'X') {
      }
    } else {
      ft_putchar_fd(*str, 1);
    }
    str++;
  }

  va_end(args);
  return i;
}

#include <stdio.h>
// int main()
// {

// }

// 				VA testing
// void abc(int cnt, ...) {
//   va_list args;
//   va_start(args, cnt);
//   while (cnt--) {
//   ft_putstr_fd(va_arg(args, char *), 1);
//   }
//   va_end(args);
// }

// int main()
// {
// 	abc(4, "hello", "burn", "the", "jews");
// }
// 

int main()
{
	int a = 5;
	printf("%p", &a);
}

