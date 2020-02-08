/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearflags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:26:03 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:26:22 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_clearflags(t_flags *flag)
{
	flag->precision = -1;
	flag->widthnbr = -1;
	flag->space = 0;
	flag->nspace = 0;
	flag->isnull = 0;
	flag->iszero = 0;
}
