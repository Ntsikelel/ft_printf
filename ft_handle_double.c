/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 16:07:13 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 17:47:23 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_handle_double(va_list argptr, const char *str, int *ind)
{
	long double temp;

	temp = va_arg(argptr, long double);
	ft_shift(str, ind);
	ft_putfloat(temp);
}
