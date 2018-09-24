# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/05 16:48:00 by nmetseem          #+#    #+#              #
#    Updated: 2018/09/24 17:25:07 by nmetseem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LFT = make -C libft/ fclean && make -C libft/
CC = gcc 
FLAGS = -Wall -Werror -Wextra 
OBJ = ft_digit_size.o ft_get_left.o ft_handle_uhex.o ft_get_padding.o ft_get_plus.o ft_get_precision.o\
		ft_get_space.o ft_handle_args.o ft_handle_binary.o ft_handle_char.o ft_handle_double.o ft_handle_flags.o\
		ft_handle_float.o ft_handle_hex.o ft_handle_int.o ft_handle_oct.o ft_handle_pointer.o ft_handle_string.o\
		ft_handle_uint.o ft_itoa_base.o ft_pad.o ft_power_10.o ft_printf.o ft_putfloat.o ft_roundoff.o ft_shift.o\
	   	ft_zero_padding.o ft_zpad.o ft_putdouble.o ft_handle_mod.o ft_addpad.o ft_putnstr.o ft_get_hash.o ft_check.o\
		ft_handle_wstring.o ft_putwstr.o ft_putnwstr.o ft_wstrlen.o ft_itoa_baseu.o  libft/ft_isdigit.o libft/ft_putchar.o \
		libft/ft_putnbr.o libft/ft_putstr.o libft/ft_strchr.o libft/ft_strlen.o libft/ft_strnew.o libft/ft_tolower.o libft/ft_bzero.o

NAME = libftprintf.a

all : $(NAME) 

$(NAME) : $(OBJ) 
	$(LFT)
	ar rc $(NAME) $(OBJ) 
	ranlib $(NAME)
$(OBJ):
	$(CC) -c $*.c -o $@ $(FLAGS)
clean :
	make -C libft/ clean
	rm -f $(OBJ)
fclean : clean
	make -C libft/ fclean
	rm -f $(NAME)
re : fclean all


