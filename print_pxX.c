/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pxX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:30:26 by lbrazale          #+#    #+#             */
/*   Updated: 2021/10/21 00:43:18 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(va_list ap)
{
	void	*add;

	add = va_arg(ap, void *);
	write(1, "0x", 2);
	return (2 + ft_putnbr_base((unsigned long)add, "0123456789abcdef", 16));
}

int	ft_print_xlow(va_list ap)
{
	unsigned int	add;

	add = va_arg(ap, unsigned int);
	return (ft_putnbr_base(add, "0123456789abcdef", 16));
}

int	ft_print_xup(va_list ap)
{
	unsigned int	add;

	add = va_arg(ap, unsigned int);
	return (ft_putnbr_base(add, "0123456789ABCDEF", 16));
}
