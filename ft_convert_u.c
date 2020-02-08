/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:11:27 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:50:29 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_u(t_flags *flag, va_list arg)
{
	unsigned int	d;
	int				len;

	d = va_arg(arg, unsigned int);
	if (flag->precision == 0 && d == 0)
	{
		ft_write_c_until(flag->space, ' ', flag);
		ft_write_c_until(flag->nspace, ' ', flag);
		return ;
	}
	len = ft_ullintlen(d, "0123456789");
	ft_convert_dutils(flag, len);
	if (flag->space > 0 && flag->iszero == 0)
		ft_write_c_until(flag->space, ' ', flag);
	if (flag->space > 0 && flag->iszero == 1)
		ft_write_c_until(flag->space, '0', flag);
	ft_write_c_until(flag->precision, '0', flag);
	ft_putunbr(d);
	flag->write = flag->write + len;
	ft_write_c_until(flag->nspace, ' ', flag);
}
