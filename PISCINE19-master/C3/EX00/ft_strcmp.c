/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:55:19 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/18 09:24:47 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*int main()
{	printf("%d", ft_strcmp("Bonjour", "BonjourBonjour"));
	printf("\n%d", ft_strcmp("Bonjour", "Bonjour"));
	printf("\n%d", ft_strcmp("BonjourBonjour", "Bonjour"));
	return (0);
}*/
