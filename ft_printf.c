/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:17:40 by lbrazale          #+#    #+#             */
/*   Updated: 2021/10/21 00:43:14 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_letter(char letter, va_list	ap)
{
	if (letter == 'c')
		return (ft_print_c(ap));
	if (letter == 's')
		return (ft_print_s(ap));
	if (letter == 'p')
		return (ft_print_p(ap));
	if (letter == 'd' || letter == 'i')
		return (ft_print_id(ap));
	if (letter == 'u')
		return (ft_print_u(ap));
	if (letter == 'x')
		return (ft_print_xlow(ap));
	if (letter == 'X')
		return (ft_print_xup(ap));
	return (write(1, &letter, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		x;
	int		cnt;

	x = 0;
	cnt = 0;
	va_start(ap, format);
	while (format[x])
	{
		if (format[x] == '%' && !format[x + 1])
			break ;
		if (format[x] == '%')
			cnt += ft_letter(format[++x], ap);
		else
			cnt += write(1, &format[x], 1);
		x++;
	}
	va_end(ap);
	return (cnt);
}
