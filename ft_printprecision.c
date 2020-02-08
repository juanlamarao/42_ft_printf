/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printprecision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:57:41 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:03:28 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printprecision(char *fmt, int *i, t_flags *flag, va_list arg)
{
	(*i)++;
	if (fmt[*i] == '*')
	{
		flag->precision = va_arg(arg, int);
		(*i)++;
		return (1);
	}
	flag->precision = 0;
	while (fmt[*i] >= '0' && fmt[*i] <= '9')
		flag->precision = (flag->precision * 10) + (fmt[(*i)++] - '0');
	return (1);
}
