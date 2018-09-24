/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addpad.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:10:37 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/24 16:41:07 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_addpad(unsigned long long hold, int isd)
{
	int z_pad;
	int w_pad;

	if (isd)
	{
		z_pad = g_padd->z_padding - ft_digit_size(hold);
		w_pad = g_padd->w_padding - ft_digit_size(hold);
	}
	else
	{
		z_pad = g_padd->z_padding - hold;
		w_pad = g_padd->w_padding - hold;
	}
	if (g_padd->w_padding == 0 && g_padd->z_padding == 0)
	{
		if (g_padd->space == TRUE)
			g_s_count->count++;
		return ;
	}
	if (z_pad <= 0)
		ft_pad(w_pad);
	else if (z_pad > 0)
		ft_zpad(z_pad);
}
