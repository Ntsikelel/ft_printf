/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:44:19 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 15:03:32 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_shift(const char *str, int *ind)
{
	if (str[*ind + 1] == 108 && str[*ind + 2] == 108)
		*ind = *ind + 4;
	else if (str[*ind + 1] == 104 && str[*ind + 2] == 104)
		*ind = *ind + 4;
	else if (str[*ind + 1] == 108)
		*ind = *ind + 3;
	else if (str[*ind + 1] == 104)
		*ind = *ind + 3;
	else
		*ind = *ind + 2;
	if (g_padd->space == TRUE)
		ft_putchar(32);
}
