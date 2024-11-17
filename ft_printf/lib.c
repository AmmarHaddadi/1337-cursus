#include "ft_printf.h"
#include <stdint.h>
#include <sys/unistd.h>
#include <unistd.h>

void put_unsigned(unsigned int num)
{
	if (num >= 10)
	{
		put_unsigned(num / 10);
	}
	ft_putchar_fd((num % 10) + '0', 1);
}

void print_address(void *add)
{
	char *base = "0123456789abcdef";
	char hex[15] = "0x000000000000";
	if (!add)
	{
		ft_putstr_fd("0x0", 1);
		return;
	}
	unsigned long iptr = (unsigned long)add;
	int i = 13;
	while (iptr)
	{
		hex[i--] = base[iptr % 16];
		iptr /= 16;
	}
	ft_putstr_fd(hex, 1);
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

int tol_unsigned(unsigned int n)
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
