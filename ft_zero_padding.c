/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_padding.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:44:47 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 13:01:32 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero_padding(const char *str, int *ind)
{
	int res;

	res = 0;
	if (str[*ind + 1] == 48)
	{
		*ind = *ind + 1;
		while (ft_isdigit(str[*ind + 1]))
		{
			res = res * 10 + str[*ind + 1] - 48;
			*ind = *ind + 1;
		}
		g_padd->z_padding = res;
	}
}
