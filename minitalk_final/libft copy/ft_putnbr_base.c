/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:26:15 by lovanden          #+#    #+#             */
/*   Updated: 2023/05/15 15:26:23 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
