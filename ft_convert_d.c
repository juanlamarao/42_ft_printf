/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:10:56 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:11:09 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_d(t_flags *flag, va_list arg)
{
	long	d;

	d = va_arg(arg, int);
	if (flag->precision == 0 && d == 0)
	{
		ft_checknbr(flag);
		return ;
	}
	if (d < 0)
		ft_convertdneg(flag, d);
	else
		ft_convertdpos(flag, d);
}
