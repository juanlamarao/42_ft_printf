/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:23:52 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:03:05 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_percent(t_flags *flag)
{
	if (flag->space > 0 && flag->iszero == 0)
		ft_write_c_until(flag->space - 1, ' ', flag);
	if (flag->space > 0 && flag->iszero == 1)
		ft_write_c_until(flag->space - 1, '0', flag);
	ft_putchar('%');
	flag->write++;
	ft_write_c_until(flag->nspace - 1, ' ', flag);
}
