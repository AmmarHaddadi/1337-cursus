/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 08:26:12 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/31 12:30:29 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static int inset(const char c, char const *set)
{
	while(*set)
		if (*set++ == c) return 1;
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set) return NULL;

	int i = 0;
	int remove_count = 0;
	while(inset(s1[i++], set))
		remove_count++;
	char const *start = &s1[--i];
	i = ft_strlen(s1) - 1;
	while(inset(s1[i--], set))
		remove_count++;
	char const *end = &s1[++i];
	char *trimmed = malloc(sizeof(char) * (ft_strlen(s1) - remove_count + 1));
	i = 0;
	ft_memmove(trimmed, start, end - start + 1);
	return trimmed;
}

// // FILEPATH: /Users/ahaddadi/1337-cursus/Libft/test_ft_strtrim.c

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// char *ft_strtrim(const char *s1, const char *set);

// // Test case 1: Trim leading and trailing spaces
// void test_trim_spaces() {
// 	const char *s1 = "   hello world   ";
// 	const char *set = " ";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string 1: \"%s\"\n", trimmed);
// 	// Expected output: "hello world"
// 	free(trimmed);
// }

// // Test case 2: Trim leading and trailing tabs
// void test_trim_tabs() {
// 	const char *s1 = "\t\t\tgoodbye world\t\t\t";
// 	const char *set = "\t";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string 2: \"%s\"\n", trimmed);
// 	// Expected output: "goodbye world"
// 	free(trimmed);
// }

// // Test case 3: Trim leading and trailing newlines
// void test_trim_newlines() {
// 	const char *s1 = "\n\n\nwelcome to the jungle\n\n\n";
// 	const char *set = "\n";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string 3: \"%s\"\n", trimmed);
// 	// Expected output: "welcome to the jungle"
// 	free(trimmed);
// }

// // Test case 4: Trim leading and trailing spaces, tabs, and newlines
// void test_trim_mixed() {
// 	const char *s1 = " \t\n  hello world \t\n  ";
// 	const char *set = " \t\n";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string 4: \"%s\"\n", trimmed);
// 	// Expected output: "hello world"
// 	free(trimmed);
// }

// // Test case 5: Trim empty string
// void test_trim_empty() {
// 	const char *s1 = "";
// 	const char *set = " \t\n";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string 5: \"%s\"\n", trimmed);
// 	// Expected output: ""
// 	free(trimmed);
// }

// // Test case 6: No characters to trim
// void test_no_trim() {
// 	const char *s1 = "hello world";
// 	const char *set = " \t\n";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string 6: \"%s\"\n", trimmed);
// 	// Expected output: "hello world"
// 	free(trimmed);
// }

// // Test case 7: All characters to trim
// void test_all_trim() {
// 	const char *s1 = " \t\n ";
// 	const char *set = " \t\n";
// 	char *trimmed = ft_strtrim(s1, set);
// 	printf("Trimmed string 7: \"%s\"\n", trimmed);
// 	// Expected output: ""
// 	free(trimmed);
// }

// int main() {
// 	test_trim_spaces();
// 	test_trim_tabs();
// 	test_trim_newlines();
// 	test_trim_mixed();
// 	test_trim_empty();
// 	test_no_trim();
// 	test_all_trim();
// 	return 0;
// }



