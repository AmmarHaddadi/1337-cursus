/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:48:12 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/11/03 10:14:27 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t s_len = ft_strlen(s);
	if (!s || !*s || start >= s_len)
		return ft_strdup("");
	else if(len == 0)
		return (ft_strdup(""));
	else if (len + start > s_len)
		len = s_len - start;
	char *sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return NULL;
	unsigned int i = 0;
	while(s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return sub;
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s",ft_substr("xxabcxx", 3, 3));
// }

// #include <stdio.h>
// #include <string.h>
// #include <assert.h>
// #include <stdlib.h>

// // Test function prototypes
// void test_ft_substr_normal();
// void test_ft_substr_start_out_of_bounds();
// void test_ft_substr_null_input();
// void test_ft_substr_length_exceeding();
// void test_ft_substr_empty_string();

// int main() {
// 	test_ft_substr_normal();
// 	test_ft_substr_start_out_of_bounds();
// 	test_ft_substr_null_input();
// 	test_ft_substr_length_exceeding();
// 	test_ft_substr_empty_string();

// 	printf("All tests passed!\n");
// 	return 0;
// }

// void test_ft_substr_normal() {
// 	const char *str = "Hello, World!";
// 	unsigned int start = 7;
// 	size_t len = 5;

// 	char *result = ft_substr(str, start, len);
// 	assert(strcmp(result, "World") == 0);
// 	printf("test_ft_substr_normal passed\n");
// 	free(result);
// }

// void test_ft_substr_start_out_of_bounds() {
// 	const char *str = "Hello, World!";
// 	unsigned int start = 20;
// 	size_t len = 5;

// 	char *result = ft_substr(str, start, len);
// 	assert(result == NULL);
// 	printf("test_ft_substr_start_out_of_bounds passed\n");
// }

// void test_ft_substr_null_input() {
// 	const char *str = NULL;
// 	unsigned int start = 0;
// 	size_t len = 5;

// 	char *result = ft_substr(str, start, len);
// 	assert(result == NULL);
// 	printf("test_ft_substr_null_input passed\n");
// }

// void test_ft_substr_length_exceeding() {
// 	const char *str = "Hello";
// 	unsigned int start = 1;
// 	size_t len = 10;

// 	char *result = ft_substr(str, start, len);
// 	assert(strcmp(result, "ello") == 0);
// 	printf("test_ft_substr_length_exceeding passed\n");
// 	free(result);
// }

// void test_ft_substr_empty_string() {
// 	const char *str = "";
// 	unsigned int start = 0;
// 	size_t len = 5;

// 	char *result = ft_substr(str, start, len);
// 	assert(strcmp(result, "") == 0);
// 	printf("test_ft_substr_empty_string passed\n");
// 	free(result);
// }

