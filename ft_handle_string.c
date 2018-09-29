/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:40:35 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/29 14:54:40 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_aux_string(char *temp, int pad, int len)
{
	if (g_pre->prec > 0)
	{
		ft_pad(pad + (len - g_pre->prec));
		ft_putnstr(temp, g_pre->prec);
		return (g_pre->prec);
	}
	else
	{
		if (g_padd->w_padding > 0)
			g_s_count->count += 0;
		else
			g_s_count->count += len;
		ft_pad(pad);
		ft_putstr(temp);
		return (len);
	}
	return (len);
}

static int	ft_help(char *temp, int pad, int len)
{
	if (g_pre->prec > 0)
	{
		ft_putnstr(temp, g_pre->prec);
		ft_pad(pad + (len - g_pre->prec));
		return (g_pre->prec);
	}
	else
	{
		ft_putstr(temp);
		ft_pad(pad);
		return (len);
	}
	return (len);
}

int			ft_handle_string(va_list argptr, const char *str, int *ind)
{
	char	*temp;
	int		pad;
	int		len;

	if (g_flag->set == 1)
	{
		len = ft_handle_wstring(argptr, str, ind);
		return (len);
	}
	ft_shift(str, ind);
	temp = va_arg(argptr, char *);
	if (!temp)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(temp);
	pad = g_padd->w_padding - len;
	if (g_padd->left == TRUE)
		return (ft_help(temp, pad, len));
	else
		return (ft_aux_string(temp, pad, len));
}
