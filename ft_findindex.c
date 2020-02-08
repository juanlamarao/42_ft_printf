/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:21:09 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:23:33 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_findindex(char type)
{
	int		i;
	char	tab[10];

	i = 0;
	tab[0] = 's';
	tab[1] = 'd';
	tab[2] = 'c';
	tab[3] = 'p';
	tab[4] = 'u';
	tab[5] = 'x';
	tab[6] = 'X';
	tab[7] = 'i';
	tab[8] = 'n';
	tab[9] = 0;
	while (tab[i])
	{
		if (tab[i] == type)
			return (i);
		if (type == '%')
			return (-2);
		i++;
	}
	return (-1);
}
