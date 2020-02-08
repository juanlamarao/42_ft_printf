/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printwidth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:54:55 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 12:57:16 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printwidth(t_flags *flag, int *i, va_list arg)
{
	flag->widthnbr = va_arg(arg, int);
	(*i)++;
	if (flag->widthnbr < 0)
		flag->nspace = flag->widthnbr * -1;
	else
		flag->space = flag->widthnbr;
	return (1);
}
