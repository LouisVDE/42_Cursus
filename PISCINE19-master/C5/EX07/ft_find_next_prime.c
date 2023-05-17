/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:11:08 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/22 11:25:13 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("%d = %d\n", 0, ft_find_next_prime(0));
	printf("%d = %d\n", 1, ft_find_next_prime(1));
	printf("%d = %d\n", 50, ft_find_next_prime(50));
	printf("%d = %d\n", 17, ft_find_next_prime(17));
	printf("%d = %d\n", 47, ft_find_next_prime(47));
	printf("%d = %d\n", -45, ft_find_next_prime(-45));
	printf("%d = %d\n", 5685, ft_find_next_prime(5685));
	printf("%d = %d\n", 85, ft_find_next_prime(85));
	printf("%d = %d\n", 78952, ft_find_next_prime(78952));
	printf("%d = %d\n", 9963, ft_find_next_prime(9963));
	printf("%d = %d\n", 13, ft_find_next_prime(13));
	printf("%d = %d\n", 4522, ft_find_next_prime(4522));
}*/
