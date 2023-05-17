/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:56:03 by lovanden          #+#    #+#             */
/*   Updated: 2022/12/26 17:07:21 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conver(char type, va_list ap)
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_putchar(va_arg(ap, int));
	if (type == 's')
		len += ft_putstr(va_arg(ap, char *));
	if (type == 'p')
	{
		len += ft_putstr("0x")
			+ ft_putnbr_base(va_arg(ap, unsigned long), "0123456789abcdef");
	}
	if (type == 'd' || type == 'i')
		len += ft_putnbr(va_arg(ap, int));
	if (type == 'u')
		len += ft_putnbr_base(va_arg(ap, unsigned), "0123456789");
	if (type == 'x')
		len += ft_putnbr_base(va_arg(ap, unsigned), "0123456789abcdef");
	if (type == 'X')
		len += ft_putnbr_base(va_arg(ap, unsigned), "0123456789ABCDEF");
	if (type == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	size_t	len;

	va_start(ap, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			len += ft_conver(*(format + 1), ap);
			format++;
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(ap);
	return (len);
}
