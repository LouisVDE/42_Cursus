/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:18:24 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/22 11:19:49 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	printf("%d = %d\n", 0, ft_is_prime(0));
	printf("%d = %d\n", 1, ft_is_prime(1));
	printf("%d = %d\n", 50, ft_is_prime(50));
	printf("%d = %d\n", 17, ft_is_prime(17));
	printf("%d = %d\n", 47, ft_is_prime(47));
	printf("%d = %d\n", -45, ft_is_prime(-45));
}*/
