/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 12:06:18 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/15 16:22:35 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_uint(va_list argptr, const char *str, int *ind)
{
	unsigned long long hold;

	ft_shift(str, ind);
	hold = va_arg(argptr, unsigned long long);
	ft_addpad(hold, TRUE);
	ft_check(ft_digit_size(hold));
	ft_putnbr(hold);
	return (ft_digit_size(hold));
}
