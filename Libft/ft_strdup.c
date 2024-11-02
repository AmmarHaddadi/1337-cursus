/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:31:34 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/11/02 13:20:47 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *dup = malloc(ft_strlen(s1) + 1);
	if (!dup)
		return NULL;
	int i = 0;
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = 0;
	return dup;
}

// #include <stdio.h>
// #include <string.h>
// #include <assert.h>
// #include "libft.h"

// // Test function prototypes
// void test_ft_strdup_normal();
// void test_ft_strdup_empty();
// void test_ft_strdup_null();

// int main() {
// 	test_ft_strdup_normal();
// 	test_ft_strdup_empty();
// 	test_ft_strdup_null();

// 	printf("All tests passed!\n");
// 	return 0;
// }

// void test_ft_strdup_normal() {
// 	const char *str = "Hello, World!";

// 	char *result1 = strdup(str);
// 	char *result2 = ft_strdup(str);

// 	assert(strcmp(result1, result2) == 0);
// 	printf("test_ft_strdup_normal passed\n");

// 	free(result1);
// 	free(result2);
// }

// void test_ft_strdup_empty() {
// 	const char *str = "";

// 	char *result1 = strdup(str);
// 	char *result2 = ft_strdup(str);

// 	assert(strcmp(result1, result2) == 0);
// 	printf("test_ft_strdup_empty passed\n");

// 	free(result1);
// 	free(result2);
// }

// void test_ft_strdup_null() {
// 	const char *str = NULL;

// 	char *result1 = strdup(str);
// 	printf("result1: %s\n", result1);
// 	char *result2 = ft_strdup(str);
// 	printf("result2: %s\n", result2);
// 	// assert(result1 == result2);
// 	printf("test_ft_strdup_null passed\n");
// }
