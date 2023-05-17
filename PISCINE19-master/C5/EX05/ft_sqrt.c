/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:00:47 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/24 16:04:04 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	nb2;

	nb2 = nb;
	if (nb2 <= 0)
		return (0);
	if (nb2 == 1)
		return (1);
	i = 2;
	if (nb2 >= 2)
	{
		while (i * i <= nb2)
		{
			if (i * i == nb2)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	printf("racine de %d = %d\n", 0, ft_sqrt(0));
	printf("racine de %d = %d\n", 25, ft_sqrt(25));
	printf("racine de %d = %d\n", 60, ft_sqrt(60));
	printf("racine de %d = %d\n", 7, ft_sqrt(7));
}*/
