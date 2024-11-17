#include "ft_printf.h"
#include <stdint.h>
#include <sys/unistd.h>
#include <unistd.h>
#include <stdlib.h>

int tol_unsigned(unsigned long n)
{
	int tol;

	tol = 0;
	if (n == 0)
		return 1;
	while (n > 0)
	{
		n /= 10;
		tol++;
	}
	return (tol);
}

int tol_hex(unsigned long n)
{
	int tol;

	tol = 0;
	while (n)
	{
		n /= 16;
		tol++;
	}
	return (tol);
}

void put_unsigned(unsigned int num)
{
	if (num >= 10)
		put_unsigned(num / 10);
	ft_putchar_fd((num % 10) + '0', 1);
}

int print_address(void *add)
{
	char *hex;
	if (!add)
	{
		ft_putstr_fd("0x0", 1);
		return 3;
	}
	char base[] = "0123456789abcdef";
	unsigned long ulptr = (unsigned long)add;
	int len = tol_hex(ulptr) + 2;

	if (!(hex = ft_calloc(len + 1, 1)))
        return 0;
	hex[len] = '\0';
	while (ulptr)
	{
		hex[--len] = base[ulptr % 16];
		ulptr /= 16;
	}
	hex[0] = '0';
	hex[1] = 'x';
	len = ft_strlen(hex);
	ft_putstr_fd(hex, 1);
	free(hex);
	return len;
}

int print_16(long long nbr, char upper)
{
	char buff[100];
	char *base = "0123456789abcdef";
	if (upper == 'X')
		base = "0123456789ABCDEF";
	int i = 0;
	if (nbr == 0)
	{
		buff[i++] = '0';
	}
	else
	{
		while (nbr)
		{
			buff[i++] = base[nbr % 16];
			nbr /= 16;
		}
	}
	buff[i] = '\0';
	int j = 0;
	char tmp_j;
	while (j < i / 2)
	{
		tmp_j = buff[j];
		buff[j] = buff[i - j - 1];
		buff[i - j - 1] = tmp_j;
		j++;
	}
	ft_putstr_fd(buff, 1);
	return ft_strlen(buff);
}

int tol(int n)
{
	int tol;

	tol = 0;
	while (n > 0)
	{
		n /= 10;
		tol++;
	}
	return (tol);
}


