/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_padding.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:56:50 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/16 14:47:16 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get_padding(va_list argptr, const char *str, int *ind)
{
	int pad;

	pad = 0;
	if ((str[*ind + 1] >= 49 && str[*ind + 1] <= 57) || str[*ind + 1] == '*')
	{
		if (str[*ind + 1] == '*')
		{
			pad = va_arg(argptr, int);
			*ind = *ind + 1;
		}
		while (ft_isdigit(str[*ind + 1]))
		{
			pad = pad * 10 + str[*ind + 1] - 48;
			*ind = *ind + 1;
		}
		g_padd->w_padding = pad;
	}
	return (pad);
}
