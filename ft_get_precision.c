/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 16:00:52 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/13 13:11:14 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get_precision(va_list argptr, const char *str, int *ind)
{
	int res;

	res = 0;
	if (str[*ind + 1] == '.')
	{
		*ind = *ind + 1;
		if (str[*ind + 1] == '*')
		{
			res = va_arg(argptr, int);
			*ind = *ind + 1;
		}
		while (ft_isdigit(str[*ind + 1]))
		{
			res = res * 10 + str[*ind + 1] - 48;
			*ind = *ind + 1;
		}
		g_pre->prec = res;
	}
	return (res);
}
