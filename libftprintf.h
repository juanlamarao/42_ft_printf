/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 14:17:00 by juolivei          #+#    #+#             */
/*   Updated: 2020/02/08 16:26:29 by juolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <inttypes.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct	s_flags
{
	int		widthnbr;
	int		precision;
	int		nspace;
	int		space;
	int		write;
	uint8_t	isnull:1;
	uint8_t	iszero:1;
}				t_flags;

int				ft_printf(const char *format, ...)
				 __attribute__((format(printf,1,2)));
int				ft_printspace(char *fmt, int *i, t_flags *flag);
int				ft_printprecision
				(char *fmt, int *i, t_flags *flag, va_list arg);
int				ft_printwidth(t_flags *flag, int *i, va_list arg);
int				ft_toleft(char *fmt, int *i, t_flags *flag, va_list arg);
int				ft_printzero(int *i, t_flags *flag);
void			ft_convert_s(t_flags *flag, va_list arg);
void			ft_convert_d(t_flags *flag, va_list arg);
void			ft_convert_c(t_flags *flag, va_list arg);
void			ft_convert_p(t_flags *flag, va_list arg);
void			ft_convert_u(t_flags *flag, va_list arg);
void			ft_convert_x(t_flags *flag, va_list arg);
void			ft_convert_x_upper(t_flags *flag, va_list arg);
void			ft_convert_percent(t_flags *flag);
int				ft_findindex(char element);
void			ft_printfunc(char *fmt, t_flags *flag, va_list arg, int *i);
void			ft_write_c_until(int i, char c, t_flags *flag);
int				ft_ullintlen(unsigned long long int nbr, char *base);
char			*ft_ulltoa_base(unsigned long long int nbr, char *base);
int				ft_gotoflags(const char *fmt);
int				ft_addflags(t_flags *flag, char *fmt, int *i, va_list arg);
void			ft_vprintf(const char *fmt, va_list arg, t_flags *flag);
int				ft_convert_null(char **str, t_flags *flag);
void			ft_convert_sutils(t_flags *flag, int len);
void			ft_convert_dutils(t_flags *flag, int len);
void			ft_convertdneg(t_flags *flag, long long d);
void			ft_ini_flags(t_flags *flag);
void			ft_clearflags(t_flags *flag);
void			ft_checknbr(t_flags *flag);
void			ft_convertdpos(t_flags *flag, unsigned long long d);
void			ft_convertxutils
				(t_flags *flag, char *str, unsigned long long d);
void			ft_convertx(t_flags *flag, char *str);
void			ft_convert_n(t_flags *flag, va_list arg);
void			ft_putllnbr(long long nbr);
void			ft_putullnbr(unsigned long long nbr);
char			*ft_strdup(const char *s1);
size_t			ft_strlen(const char *str);
char			*ft_strrev(char *str);
void			ft_putchar(char c);
void			ft_putunbr(unsigned int nbr);

#endif
