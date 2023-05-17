/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:41:05 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/26 14:31:48 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		i2;

	i2 = argc - 1;
	while (i2 != 0)
	{
		i = 0;
		str = argv[i2];
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
		i2--;
	}
	return (0);
}
