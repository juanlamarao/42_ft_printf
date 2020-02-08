# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/01 14:00:17 by juolivei          #+#    #+#              #
#    Updated: 2020/02/08 13:59:58 by juolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

GCC = gcc -Wall -Werror -Wextra

C_OBJ = ft_printf.c ft_add_flags.c ft_convert_x_upper.c ft_printzero.c \
		ft_checknbr.c ft_convertdneg.c ft_putchar.c ft_clearflags.c \
		ft_convertdpos.c ft_putllnbr.c ft_convert_c.c ft_convertx.c \
		ft_putullnbr.c ft_convert_d.c ft_convertxutils.c ft_putunbr.c \
		ft_convert_n.c ft_findindex.c ft_strdup.c ft_convert_null.c	\
		ft_gotoflags.c ft_strlen.c ft_convert_p.c ft_ini_flags.c ft_strrev.c \
		ft_convert_percent.c ft_toleft.c ft_convert_s.c ft_printfunc.c \
		ft_ullintlen.c ft_convert_sutils.c ft_printprecision.c \
		ft_ulltoa_base.c ft_convert_u.c ft_printspace.c ft_vprintf.c \
		ft_convert_x.c ft_printwidth.c ft_write_c_until.c ft_convert_dutils.c

O_OBJ = ft_printf.o ft_add_flags.o ft_convert_x_upper.o ft_printzero.o \
		ft_checknbr.o ft_convertdneg.o ft_putchar.o ft_clearflags.o \
		ft_convertdpos.o ft_putllnbr.o ft_convert_c.o ft_convertx.o \
		ft_putullnbr.o ft_convert_d.o ft_convertxutils.o ft_putunbr.o \
		ft_convert_n.o ft_findindex.o ft_strdup.o ft_convert_null.o	\
		ft_gotoflags.o ft_strlen.o ft_convert_p.o ft_ini_flags.o ft_strrev.o \
		ft_convert_percent.o ft_toleft.o ft_convert_s.o ft_printfunc.o \
		ft_ullintlen.o ft_convert_sutils.o ft_printprecision.o \
		ft_ulltoa_base.o ft_convert_u.o ft_printspace.o ft_vprintf.o \
		ft_convert_x.o ft_printwidth.o ft_write_c_until.o ft_convert_dutils.o

all: $(NAME)

$(NAME): $(C_OBJ) $(O_OBJ)
	ar rc $(NAME) $(O_OBJ)

$(C_OBJ):
	$(GCC) $(C_OBJ)

clean:
	rm -rf $(O_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
