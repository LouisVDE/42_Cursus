/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:37:19 by lovanden          #+#    #+#             */
/*   Updated: 2023/05/16 10:17:14 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_bits(int pid, char i)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((i & (0x01 << bit)) != 0)
		{
			if (pid != -1)
				kill(pid, SIGUSR1);
		}
		else
		{
			if (pid != -1)
				kill(pid, SIGUSR2);
		}
		usleep(100);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
		{
			return (1);
		}
		while (argv[2][i] != '\0')
			ft_send_bits(pid, argv[2][i++]);
		ft_send_bits(pid, '\n');
	}
	else
	{
		ft_printf("Error: wrong format.\n");
		ft_printf("Try: ./client [PID] [\"MESSAGE\"]\n");
		return (1);
	}
	return (0);
}
