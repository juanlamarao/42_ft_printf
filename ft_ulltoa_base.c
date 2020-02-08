/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:26:57 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:04:10 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_ulltoa_base(unsigned long long int nbr, char *base)
{
	int		i;
	int		m;
	char	*str;
	int		lenbase;

	i = 0;
	if (nbr == 0)
	{
		str = malloc(2 * sizeof(char));
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	lenbase = ft_strlen(base);
	m = ft_ullintlen(nbr, base);
	str = malloc((m + 1) * sizeof(char));
	while (nbr > 0)
	{
		str[i] = base[nbr % lenbase];
		nbr = nbr / lenbase;
		i++;
	}
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
