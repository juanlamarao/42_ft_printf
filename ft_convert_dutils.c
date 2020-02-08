/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_dutils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:58:52 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:59:14 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_dutils(t_flags *flag, int len)
{
	if (flag->precision >= 0)
		flag->iszero = 0;
	if (flag->space > 0)
	{
		flag->precision = (flag->precision > len) ? flag->precision : len;
		flag->space = flag->space - flag->precision;
	}
	if (flag->nspace > 0)
	{
		flag->precision = (flag->precision > len) ? flag->precision : len;
		flag->nspace = flag->nspace - flag->precision;
	}
	if (flag->precision > 0)
		flag->precision = flag->precision - len;
}
