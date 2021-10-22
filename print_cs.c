/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_cs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:10:00 by lbrazale          #+#    #+#             */
/*   Updated: 2021/10/21 00:43:43 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_c(va_list ap)
{
	char	chr;

	chr = va_arg(ap, int);
	return (write(1, &chr, 1));
}

int	ft_print_s(va_list ap)
{
	char	*str;
	int		cnt;

	cnt = 0;
	str = va_arg(ap, char *);
	if (!str)
		return (write(1, "(null)", 6));
	while (str[cnt])
		write (1, &str[cnt++], 1);
	return (cnt);
}
