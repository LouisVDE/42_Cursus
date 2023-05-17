/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:51:09 by lovanden          #+#    #+#             */
/*   Updated: 2022/09/22 15:01:29 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		i2;

	i2 = 1;
	while (i2 < argc)
	{
		i = 0;
		str = argv[i2];
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
		i2++;
	}
	return (0);
}
