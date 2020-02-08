/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertdpos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:01:43 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:13:56 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convertdpos(t_flags *flag, unsigned long long d)
{
	int len;

	len = ft_ullintlen(d, "0123456789");
	ft_convert_dutils(flag, len);
	if (flag->space > 0 && flag->iszero == 0)
		ft_write_c_until(flag->space, ' ', flag);
	if (flag->space > 0 && flag->iszero == 1)
	{
		ft_write_c_until(flag->space, '0', flag);
	}
	ft_write_c_until(flag->precision, '0', flag);
	ft_putullnbr(d);
	flag->write = flag->write + len;
	ft_write_c_until(flag->nspace, ' ', flag);
}
