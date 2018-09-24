/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 14:41:26 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/24 16:48:36 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pad(int len)
{
	if (g_padd->w_padding && !g_padd->space)
		g_s_count->count += len + g_padd->space;
	else
		g_s_count->count += len;
	while (len-- - g_padd->space > 0)
		ft_putchar(32);
}
