/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 13:46:10 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 14:57:28 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_int(va_list argptr, const char *str, int *ind)
{
	long long	hold;
	int			temp;

	ft_shift(str, ind);
	hold = va_arg(argptr, long long);
	ft_addpad(hold, TRUE);
	ft_check(ft_digit_size(hold));
	ft_putnbr(hold);
	temp = ft_digit_size(hold);
	return (temp);
}
