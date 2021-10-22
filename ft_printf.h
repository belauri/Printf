/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrazale <lbrazale@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:24:05 by lbrazale          #+#    #+#             */
/*   Updated: 2021/10/21 00:43:12 by lbrazale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_c(va_list ap);
int	ft_print_s(va_list ap);
int	ft_print_id(va_list ap);
int	ft_print_u(va_list ap);
int	ft_print_p(va_list ap);
int	ft_print_xlow(va_list ap);
int	ft_print_xup(va_list ap);
int	ft_putnbr_base(unsigned long long nbr, char *base, unsigned long long blen);
int	ft_checklen(char *base);

#endif
