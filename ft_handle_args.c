/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 17:49:39 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/24 17:24:56 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	init(void)
{
	g_padd->z_padding = FALSE;
	g_padd->w_padding = FALSE;
	g_padd->space = FALSE;
	g_padd->left = FALSE;
	g_flag->set = FALSE;
	g_padd->sharp = FALSE;
	g_pre->prec = FALSE;
}

static void	ft_handle(va_list argptr, const char *str, int *ind)
{
	ft_get_space(str, ind);
	ft_get_left(str, ind);
	ft_get_plus(str, ind);
	ft_get_hash(str, ind);
	ft_get_padding(argptr, str, ind);
	ft_zero_padding(str, ind);
	ft_get_precision(argptr, str, ind);
	ft_handle_flags(str, ind);
}

static int	ft_aux_args(va_list argptr, const char *str, int *ind)
{
	init();
	ft_handle(argptr, str, ind);
	if (str[*ind + 1] == '%')
		return (ft_handle_mod(str, ind));
	else if (str[*ind + 1] == 'd' || str[*ind + 1] == 'i')
		return (ft_handle_int(argptr, str, ind));
	else if (str[*ind + 1] == 'D')
		return (ft_handle_int(argptr, str, ind));
	else if (str[*ind + 1] == 'c' || str[*ind + 1] == 'C')
		return (ft_handle_char(argptr, str, ind));
	else if (str[*ind + 1] == 'f' || str[*ind + 1] == 'F')
		return (ft_handle_float(argptr, str, ind));
	else if (str[*ind + 1] == 's')
		return (ft_handle_string(argptr, str, ind));
	else if (str[*ind + 1] == 'e' || str[*ind + 1] == 'E')
		return (ft_handle_float(argptr, str, ind));
	else if (str[*ind + 1] == 'S')
		return (ft_handle_wstring(argptr, str, ind));
	else if (str[*ind + 1] == 'X')
		return (ft_handle_uhex(argptr, str, ind));
	else if (str[*ind + 1] == 'u' || str[*ind + 1] == 'U')
		return (ft_handle_uint(argptr, str, ind));
	else if (str[*ind + 1] == 'o' || str[*ind + 1] == 'O')
		return (ft_handle_oct(argptr, str, ind));
	return (0);
}

int			ft_handle_args(va_list argptr, const char *str)
{
	int ind;
	int ret;

	ind = 0;
	g_s_count->count = 0;
	while (str[ind] != '\0')
	{
		if (str[ind] == '%' && str[ind] != '\0')
		{
			if (!(ret = ft_aux_args(argptr, str, &ind)))
			{
				if (str[ind + 1] == 'x')
					g_s_count->count += ft_handle_hex(argptr, str, &ind);
				else if (str[ind + 1] == 'b')
					g_s_count->count += ft_handle_binary(argptr, str, &ind);
				else if (str[ind + 1] == 'p')
					g_s_count->count += ft_handle_pointer(argptr, str, &ind);
			}
			g_s_count->count += ret;
		}
		if (str[ind] != '%')
			ft_putchar(str[ind++]);
		g_s_count->count++;
	}
	return (g_s_count->count);
}
