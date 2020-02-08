/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printspace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:50:24 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:03:36 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printspace(char *fmt, int *i, t_flags *flag)
{
	while (fmt[*i] >= '0' && fmt[*i] <= '9')
		flag->space = (flag->space * 10) + (fmt[(*i)++] - '0');
	return (1);
}
