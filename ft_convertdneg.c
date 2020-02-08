/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertdneg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:02:56 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:43:44 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convertdneg(t_flags *flag, long long d)
{
	int len;

	d = -d;
	len = ft_ullintlen(d, "0123456789");
	ft_convert_dutils(flag, len);
	flag->space--;
	flag->nspace--;
	if (flag->space > 0 && !flag->iszero)
		ft_write_c_until(flag->space, ' ', flag);
	if (flag->space > 0 && flag->iszero)
	{
		ft_write_c_until(1, '-', flag);
		ft_write_c_until(flag->space, '0', flag);
	}
	else
		ft_write_c_until(1, '-', flag);
	ft_write_c_until(flag->precision, '0', flag);
	ft_putllnbr(d);
	flag->write = flag->write + len;
	ft_write_c_until(flag->nspace, ' ', flag);
}
