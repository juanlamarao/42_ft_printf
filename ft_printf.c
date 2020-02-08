/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:30:44 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:31:20 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *fmt, ...)
{
	va_list		arg;
	t_flags		flag;

	va_start(arg, fmt);
	ft_ini_flags(&flag);
	ft_vprintf(fmt, arg, &flag);
	va_end(arg);
	return (flag.write);
}
