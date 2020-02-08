/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:07:16 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 16:31:43 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convertx(t_flags *flag, char *str)
{
	int len;

	len = ft_strlen(str);
	ft_convert_dutils(flag, len);
	if (flag->space > 0 && flag->iszero == 0)
		ft_write_c_until(flag->space, ' ', flag);
	if (flag->space > 0 && flag->iszero == 1)
		ft_write_c_until(flag->space, '0', flag);
	ft_write_c_until(flag->precision, '0', flag);
	write(1, str, len);
	flag->write = flag->write + len;
	ft_write_c_until(flag->nspace, ' ', flag);
}
