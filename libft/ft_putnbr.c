/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:29:15 by lovanden          #+#    #+#             */
/*   Updated: 2023/05/15 15:31:49 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr(long int n)
{
	size_t	sign;
	size_t	len;

	sign = 1;
	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		sign = -1;
	}
	n *= sign;
	if (n < 10)
		len += ft_putchar(n + 48);
	else
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	return (len);
}
