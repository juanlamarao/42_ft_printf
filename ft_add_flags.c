/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_flags.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:35:06 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:00:33 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_addflags(t_flags *flag, char *fmt, int *i, va_list arg)
{
	if (fmt[*i] == '-')
		return (ft_toleft(fmt, i, flag, arg));
	else if (fmt[*i] == '.')
		return (ft_printprecision(fmt, i, flag, arg));
	else if (fmt[*i] == '*')
		return (ft_printwidth(flag, i, arg));
	else if (fmt[*i] > '0' && fmt[*i] <= '9')
		return (ft_printspace(fmt, i, flag));
	else if (fmt[*i] == '0')
		return (ft_printzero(i, flag));
	return (-1);
}
