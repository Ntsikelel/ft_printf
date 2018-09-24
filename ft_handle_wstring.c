/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_wstring.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:34:51 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/24 15:07:14 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_aux_string(wchar_t *temp, int pad, int len)
{
	if (g_pre->prec > 0)
	{
		ft_pad(pad + (len - g_pre->prec));
		ft_putnwstr(temp, g_pre->prec);
		return (g_pre->prec);
	}
	else
	{
		if (g_padd->w_padding > 0)
			g_s_count->count += 0;
		else
			g_s_count->count += len;
		ft_pad(pad);
		ft_putwstr(temp);
		return (len);
	}
	return (len);
}

static int	ft_help(wchar_t *temp, int pad, int len)
{
	if (g_pre->prec > 0)
	{
		ft_putnwstr(temp, g_pre->prec);
		ft_pad(pad + (len - g_pre->prec));
		return (g_pre->prec);
	}
	else
	{
		ft_putwstr(temp);
		ft_pad(pad);
		return (len);
	}
	return (len);
}

int			ft_handle_wstring(va_list argptr, const char *str, int *ind)
{
	wchar_t	*temp;
	int		pad;
	int		len;

	ft_shift(str, ind);
	temp = va_arg(argptr, wchar_t *);
	if (!temp)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_wstrlen(temp);
	pad = g_padd->w_padding - len;
	if (g_padd->left == TRUE)
	{
		return (ft_help(temp, pad, len));
	}
	else
		return (ft_aux_string(temp, pad, len));
}
