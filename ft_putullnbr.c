/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putullnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:24:52 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 12:37:19 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putullnbr(unsigned long long nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + 48);
	else
	{
		ft_putullnbr(nbr / 10);
		ft_putullnbr(nbr % 10);
	}
}
