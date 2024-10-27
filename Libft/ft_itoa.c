/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:15:57 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/27 13:24:46 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int tol(int n)
{
	int tol = 0;
	while(n > 0)
	{
		n/= 10;
		tol++;
	}
	return tol;
}

char *ft_itoa(int n)
{
	if (n == 0) return "0";
	if (n == -2147483648) return "-2147483648";

	int is_neg = (n < 0);
	if (is_neg) n = -n;
	int len = tol(n) + is_neg + 1;
	char *str = malloc(len * sizeof(char));
	if (!str) return NULL;
	len -= 1;
	str[len] = '\0';
	if (is_neg) str[0] = '-';
	while(n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return str;
}


// // tests

// #include <stdio.h>
// #include <string.h>

// void test_ft_itoa(int n, char *expected_result)
// {
//     char *result = ft_itoa(n);
//     if (strcmp(result, expected_result) == 0)
//     {
//         printf("PASS: ft_itoa(%d) = %s\n", n, result);
//     }
//     else
//     {
//         printf("FAIL: ft_itoa(%d) = %s, expected: %s\n", n, result, expected_result);
//     }
// }

// int main()
// {
//     // Test cases
//     test_ft_itoa(0, "0");
//     test_ft_itoa(123, "123");
//     test_ft_itoa(-456, "-456");
//     test_ft_itoa(987654321, "987654321");
//     test_ft_itoa(-987654321, "-987654321");

//     return 0;
// }




