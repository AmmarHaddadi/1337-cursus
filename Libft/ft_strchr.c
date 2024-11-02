/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:15:19 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/11/02 12:44:26 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
	char ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			return (char *)s;
		s++;
	}
	if (ch == 0)
		return (char *)(s);
	return NULL;
}

// #include <stdio.h>
// #include <string.h>
// #include <assert.h>

// // Test function prototypes
// void test_ft_strchr_found();
// void test_ft_strchr_not_found();
// void test_ft_strchr_null_char();
// void test_ft_strchr_empty_string();

// int main() {
// 	test_ft_strchr_found();
// 	test_ft_strchr_not_found();
// 	test_ft_strchr_null_char();
// 	test_ft_strchr_empty_string();

// 	printf("All tests passed!\n");
// 	return 0;
// }

// void test_ft_strchr_found() {
// 	const char *str = "Hello, World!";
// 	char c = 'W';

// 	char *result1 = strchr(str, c);
// 	char *result2 = ft_strchr(str, c);

// 	assert(result1 == result2);
// 	printf("test_ft_strchr_found passed\n");
// }

// void test_ft_strchr_not_found() {
// 	const char *str = "Hello, World!";
// 	char c = 'x';

// 	char *result1 = strchr(str, c);
// 	char *result2 = ft_strchr(str, c);

// 	assert(result1 == result2);
// 	printf("test_ft_strchr_not_found passed\n");
// }

// void test_ft_strchr_null_char() {
// 	const char *str = "Hello, World!";
// 	char c = '\0';

// 	char *result1 = strchr(str, c);
// 	char *result2 = ft_strchr(str, c);

// 	assert(result1 == result2);
// 	printf("test_ft_strchr_null_char passed\n");
// }

// void test_ft_strchr_empty_string() {
// 	const char *str = "";
// 	char c = 'H';

// 	char *result1 = strchr(str, c);
// 	char *result2 = ft_strchr(str, c);

// 	assert(result1 == result2);
// 	printf("test_ft_strchr_empty_string passed\n");
// }
