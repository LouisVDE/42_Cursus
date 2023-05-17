/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:15:44 by lovanden          #+#    #+#             */
/*   Updated: 2023/02/15 15:45:58 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = ft_strlen(str);
	write(1, str, i);
	return (i);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

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

size_t	ft_putnbr_base(unsigned long int n, const char *base)
{
	size_t	base_len;
	size_t	len;

	if (!base || ft_strlen(base) < 2)
		return (0);
	base_len = ft_strlen(base);
	len = 0;
	if (n < base_len)
		len += ft_putchar(base[n]);
	else
	{
		len += ft_putnbr_base(n / base_len, base);
		len += ft_putnbr_base(n % base_len, base);
	}
	return (len);
}
