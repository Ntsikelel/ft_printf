/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_Uhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:47:02 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/24 17:23:56 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_0x(void)
{
	if (g_padd->sharp == TRUE)
	{
		ft_putstr("0x");
		g_s_count->count += 2;
	}
}

int				ft_handle_uhex(va_list argptr, const char *str, int *ind)
{
	unsigned long long	utemp;
	char				*hold;
	size_t				len;

	ft_shift(str, ind);
	utemp = va_arg(argptr, unsigned long long);
	hold = ft_itoa_basealpha(utemp, 16);
	ft_0x();
	ft_addpad(ft_strlen(hold), FALSE);
	ft_check(ft_strlen(hold));
	ft_putstr(hold);
	len = ft_strlen(hold);
	free(hold);
	return ((int)len);
}
