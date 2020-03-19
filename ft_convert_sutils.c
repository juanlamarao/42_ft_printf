/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_sutils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:05:41 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:05:57 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_sutils(t_flags *flag, int len)
{
	if (flag->space > 0)
	{
		if (flag->precision > 0 && flag->precision < len)
			flag->space = flag->space - flag->precision;
		else if (flag->precision == 0)
			flag->space = flag->space;
		else
			flag->space = flag->space - len;
	}
	if (flag->nspace > 0)
	{
		if (flag->precision > 0 && flag->precision < len)
			flag->nspace = flag->nspace - flag->precision;
		else if (!flag->precision == 0)
			flag->nspace = flag->nspace - len;
	}
}
