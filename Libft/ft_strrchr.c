/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:51:12 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/24 13:28:21 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	if (c == 0)
		return (char *) (++s);
	while (i >= 0)
	{
		if (*s == c)
			return (char *) s;
		s--;
		i--;
	}

	return NULL;
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s", strchr("a11a22a33", 'a'));
// }
