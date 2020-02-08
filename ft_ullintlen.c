/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullintlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:28:04 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:15:53 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_ullintlen(unsigned long long nbr, char *base)
{
	int lenbase;
	int i;

	i = 0;
	if (nbr == 0)
		return (1);
	lenbase = ft_strlen(base);
	while (nbr > 0)
	{
		nbr = nbr / lenbase;
		i++;
	}
	return (i);
}
