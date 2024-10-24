/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:15:19 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/24 12:08:38 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *strchr(const char *s, int c)
{
	// char ch = (char)c
	while (*s)
	{
		if (*s == c)
			return (char *) s;
		s++;
	}
	if (c == 0)
		return (char *) (s);
	return NULL;
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s", strchr("a11a22a33", 'a'));
// }



