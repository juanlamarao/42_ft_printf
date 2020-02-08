/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 12:44:08 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:53:05 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strrev(char *str)
{
	char	temp;
	int		x;
	int		y;

	y = ft_strlen(str) - 1;
	x = 0;
	while ((unsigned int)x < (ft_strlen(str) / 2))
	{
		temp = str[y];
		str[y] = str[x];
		str[x] = temp;
		y--;
		x++;
	}
	return (str);
}
