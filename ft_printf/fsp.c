#include "ft_printf.h"
#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// returns the length of a number in a given base
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

// returns a string of the hexadecimal representation of a number
char	*convert2hex(unsigned long n, char upper)
{
	char *base = "0123456789abcdef";
	char *buffer;
	int len = tol_unsigned(n, 16);

	if (upper == 'X')
		base = "0123456789ABCDEF";
	buffer = malloc(len + 1);
	if (!buffer)
		return NULL;
	buffer[len] = '\0';
	if (n == 0)
		buffer[--len] = '0';
	while (n)
	{
		buffer[--len] = base[n % 16];
		n /= 16;
	}
	return buffer;
}

// %c
char    *format_c(int c)
{
    char    *str;

    str = malloc(2);
    if (!str)
        return (NULL);
    str[0] = (unsigned char)c;
    str[1] = '\0';
    return (str);
}

// %s
char	*format_s(char *str)
{
	if (!str)
		return ft_strdup("(null)");
	return ft_strdup(str);
}

// %p
char *format_p(void *add)
{
	if (!add)
		return ft_strdup("0x0");
	unsigned long ulptr = (unsigned long)add;
	char *hex = convert2hex(ulptr, 'x');
	if (!hex)
		return NULL;
	char *ptr = ft_strjoin("0x", hex);
	free(hex);
	return ptr;
}

// %d and %i
char	*format_di(int nbr)
{
	char *n = ft_itoa(nbr);
	if (!n)
		return NULL;
	return n;
}

// %u
char *format_u(unsigned int num)
{
	char *str;
	int len = tol_unsigned(num, 10);

	str = malloc(len + 1);
	if (!str)
		return NULL;
	str[len] = '\0';
	if (num == 0)
		str[--len] = '0';
	while (num)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return str;
}
