/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_c_until.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:29:21 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:29:47 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_write_c_until(int i, char c, t_flags *flag)
{
	while (i > 0)
	{
		write(1, &c, 1);
		flag->write++;
		i--;
	}
}
