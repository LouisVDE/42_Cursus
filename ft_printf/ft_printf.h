/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lovanden <lovanden@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 19:06:02 by lovanden          #+#    #+#             */
/*   Updated: 2023/02/15 15:46:13 by lovanden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *str);
int		ft_putstr(char *str);
int		ft_putchar(char c);
size_t	ft_putnbr(long int n);
size_t	ft_putnbr_base(unsigned long int n, const char *base);
int		ft_conver(char conv, va_list ap);

#endif
