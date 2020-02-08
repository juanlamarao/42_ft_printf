/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:18:47 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:20:14 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printfunc(char *fmt, t_flags *flag, va_list arg, int *i)
{
	void	(*tabfunction[9])(t_flags *, va_list);
	int		j;

	tabfunction[0] = ft_convert_s;
	tabfunction[1] = ft_convert_d;
	tabfunction[2] = ft_convert_c;
	tabfunction[3] = ft_convert_p;
	tabfunction[4] = ft_convert_u;
	tabfunction[5] = ft_convert_x;
	tabfunction[6] = ft_convert_x_upper;
	tabfunction[7] = ft_convert_d;
	tabfunction[8] = ft_convert_n;
	j = ft_findindex(fmt[*i]);
	if (j == -1)
		return ;
	if (j == -2)
	{
		ft_convert_percent(flag);
		(*i)++;
		return ;
	}
	(*tabfunction[j])(flag, arg);
	(*i)++;
}
