/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:18:12 by lovanden          #+#    #+#             */
/*   Updated: 2023/05/17 15:38:10 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_for(int init, int cond, int incr, void (*loop)(int))
{
	int	i;

	i = init;
	while (i <= cond)
	{
		loop(i);
		i += incr;
	}
}
