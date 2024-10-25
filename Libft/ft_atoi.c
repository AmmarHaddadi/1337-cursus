/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaddadi <ahaddadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:46:07 by ahaddadi          #+#    #+#             */
/*   Updated: 2024/10/25 16:37:55 by ahaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int total = 0;
	int sign = 1;
	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while(ft_isdigit(*str))
		total = total * 10 + (*str++ - '0');
	return (total * sign);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_atoi("123"));
// }

