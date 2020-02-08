/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:15:09 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:02:38 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_c(t_flags *flag, va_list arg)
{
	unsigned int c;

	c = (unsigned char)va_arg(arg, int);
	ft_write_c_until(flag->space - 1, ' ', flag);
	ft_putchar(c);
	flag->write++;
	ft_write_c_until(flag->nspace - 1, ' ', flag);
}
