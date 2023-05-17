/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:04:08 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/21 13:17:44 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1 - negative;
	i = 0;
	while (*str >= '0' && *str <= '9')
		i = i * 10 + *str++ - '0';
	if (negative)
		i *= -1;
	return (i);
}
/*int main()
{
	char *s = "--++-+-565845e6655";
	printf("%d", ft_atoi(s));
}*/
