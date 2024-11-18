#include "ft_printf.h"
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// general
int tol_unsigned(unsigned long n, int base)
{
	int tol_unsigned;

	tol_unsigned = 0;
	if (n == 0)
		return 1;
	while (n)
	{
		n /= base;
		tol_unsigned++;
	}
	return (tol_unsigned);
}

void print_hex(unsigned long n, char upper)
{
	char *base = "0123456789abcdef";
	if (upper == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
		print_hex(n / 16, upper);
	ft_putchar_fd(base[n % 16], 1);
}

// %s
int print_s(char *x)
{
	if (!x)
	{
		ft_putstr_fd("(null)", 1);
		return 6;
	}
	ft_putstr_fd(x, 1);
	return ft_strlen(x);
}

// %p
int print_p(void *add)
{
	if (!add)
	{
		ft_putstr_fd("0x0", 1);
		return 3;
	}
	ft_putstr_fd("0x", 1);
	unsigned long ulptr = (unsigned long)add;
	print_hex(ulptr, 'x');
	return (tol_unsigned(ulptr, 16) + 2);
}

// %d and %i
int print_di(int nbr)
{
	char *n = ft_itoa(nbr);
	if (!n)
		return -1;
	ft_putstr_fd(n, 1);
	int len = ft_strlen(n);
	free(n);
	return len;
}

// %u
void print_u(unsigned int num)
{
	if (num >= 10)
		print_u(num / 10);
	ft_putchar_fd((num % 10) + '0', 1);
}

// %x and %X
int print_x(unsigned int nbr, char upper)
{
	print_hex(nbr, upper);
	return tol_unsigned(nbr, 16);
}


