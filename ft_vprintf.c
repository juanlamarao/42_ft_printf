/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:31:32 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:33:02 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_vprintf(const char *fmt, va_list arg, t_flags *flag)
{
	int i;
	int j;
	int temp;

	temp = 0;
	j = ft_gotoflags(fmt);
	write(1, fmt, j);
	flag->write = flag->write + j;
	if (fmt[j] == '\0')
		return ;
	while (fmt[j])
	{
		if (fmt[j] == '%')
			j++;
		while (temp != -1)
			temp = ft_addflags(flag, (char *)fmt, &j, arg);
		ft_printfunc((char *)fmt, flag, arg, &j);
		temp = 0;
		ft_clearflags(flag);
		i = ft_gotoflags(fmt + j);
		write(1, fmt + j, i);
		flag->write = flag->write + i;
		j = j + i;
	}
}
