/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:16:24 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 13:45:49 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_s(t_flags *flag, va_list arg)
{
	char	*str;
	int		len;

	str = va_arg(arg, char *);
	if (str == NULL)
		len = ft_convert_null(&str, flag);
	else
		len = (int)ft_strlen(str);
	ft_convert_sutils(flag, len);
	if (flag->precision >= 0)
	{
		if (flag->precision == 0)
			len = 0;
		else
			len = (flag->precision > len) ? len : flag->precision;
	}
	ft_write_c_until(flag->space, ' ', flag);
	write(1, str, len);
	flag->write = flag->write + len;
	ft_write_c_until(flag->nspace, ' ', flag);
	if (flag->isnull == 1)
		free(str);
}
