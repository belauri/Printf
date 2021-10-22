/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:12:00 by lbrazale          #+#    #+#             */
/*   Updated: 2021/10/21 00:37:34 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long nbr, char *base, unsigned long long blen)
{
	int	cnt;

	cnt = 0;
	if (nbr >= blen)
		cnt += ft_putnbr_base((nbr / blen), base, blen);
	cnt += write(1, &base[nbr % blen], 1);
	return (cnt);
}
