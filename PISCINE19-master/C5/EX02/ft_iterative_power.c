/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:52:46 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/22 11:48:53 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = nb;
	while (power > 1)
	{
		resultat *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (resultat);
}
/*#include <stdio.h>

int main()
{
	printf("%i", ft_iterative_power(3,  4));
}*/
