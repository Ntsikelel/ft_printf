/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:57:15 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 17:49:36 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putfloat(double n)
{
	signed long int	hold;
	double			dec;
	int				pow;

	hold = (signed long int)n;
	ft_putnbr(hold);
	write(1, ".", 1);
	dec = n - hold;
	pow = ft_power_10(g_pre->prec);
	if (g_pre->prec != 0)
		dec *= pow + ft_roundoff();
	else
		dec *= FLOAT_PREC;
	ft_putnbr(dec);
	return (ft_digit_size((int)dec) + ft_digit_size(hold) + 1);
}
