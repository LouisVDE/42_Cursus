/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:32:21 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/17 16:23:39 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i2 < nb && src[i2] != '\0')
	{
		dest[i + i2] = src[i2];
		i2++;
	}
	dest[i + i2] = '\0';
	return (dest);
}
/*int main()
{
	char src[] = "bonjour";
	char dest[] = "Test";
	printf("%s", ft_strncat(dest, src, 20));
}*/
