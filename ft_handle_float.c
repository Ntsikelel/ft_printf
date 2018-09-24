/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_float.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:37:40 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 17:50:00 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_float(va_list argptr, const char *str, int *ind)
{
	double	temp;
	int		hold;

	temp = va_arg(argptr, double);
	ft_shift(str, ind);
	hold = ft_putfloat(temp);
	return (hold);
}
