/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:10:25 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:10:43 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_x(t_flags *flag, va_list arg)
{
	unsigned int	d;
	char			*str;

	d = va_arg(arg, unsigned int);
	if (flag->precision == 0 && d == 0)
	{
		ft_write_c_until(flag->space, ' ', flag);
		ft_write_c_until(flag->nspace, ' ', flag);
		return ;
	}
	str = ft_ulltoa_base(d, "0123456789abcdef");
	ft_convertxutils(flag, str, d);
	free(str);
}
