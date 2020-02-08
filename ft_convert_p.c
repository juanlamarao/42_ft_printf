/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:12:52 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 14:05:39 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_p(t_flags *flag, va_list arg)
{
	int						len;
	char					*str;
	unsigned long long int	ptr;

	ptr = (unsigned long long int)va_arg(arg, void *);
	str = ft_ulltoa_base(ptr, "0123456789abcdef");
	len = ft_strlen(str);
	if (ptr == 0 && flag->precision == 0)
		len = 0;
	ft_write_c_until(flag->space - (len + 2), ' ', flag);
	write(1, "0x", 2);
	write(1, str, len);
	flag->write = flag->write + (len + 2);
	ft_write_c_until(flag->nspace - (len + 2), ' ', flag);
	free(str);
}
