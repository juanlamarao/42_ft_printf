/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toleft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:59:34 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:03:46 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_toleft(char *fmt, int *i, t_flags *flag, va_list arg)
{
	(*i)++;
	if (fmt[*i] == '*')
	{
		flag->nspace = va_arg(arg, int);
		if (flag->nspace < 0)
			flag->nspace = flag->nspace * -1;
		(*i)++;
		return (1);
	}
	while (fmt[*i] >= '0' && fmt[*i] <= '9')
		flag->nspace = (flag->nspace * 10) + (fmt[(*i)++] - '0');
	return (1);
}
