/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_diu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:30:26 by lbrazale          #+#    #+#             */
/*   Updated: 2021/10/21 00:43:16 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_id(va_list ap)
{
	long long	nbr;
	int			cnt;

	nbr = va_arg(ap, int);
	cnt = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		cnt += write(1, "-", 1);
	}
	return (ft_putnbr_base(nbr, "0123456789", 10) + cnt);
}

int	ft_print_u(va_list ap)
{
	unsigned int	nbr;

	nbr = va_arg(ap, unsigned int);
	return (ft_putnbr_base(nbr, "0123456789", 10));
}
