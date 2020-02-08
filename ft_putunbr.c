/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:39:15 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:45:23 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + 48);
	else
	{
		ft_putunbr(nbr / 10);
		ft_putunbr(nbr % 10);
	}
}
