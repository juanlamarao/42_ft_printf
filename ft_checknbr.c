/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checknbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:08:52 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:09:18 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_checknbr(t_flags *flag)
{
	ft_write_c_until(flag->space, ' ', flag);
	ft_write_c_until(flag->nspace, ' ', flag);
}
