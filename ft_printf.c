/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 13:15:40 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/08 10:30:32 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	va_list		argptr;
	int			ind;

	g_padd = (t_padd_handle *)malloc(sizeof(t_padd_handle));
	g_pre = (t_prec *)malloc(sizeof(t_prec));
	g_flag = (t_flag *)malloc(sizeof(t_flag));
	g_s_count = (t_count *)malloc(sizeof(t_count));
	if (!g_padd || !g_pre || !g_flag || !g_s_count)
		return (0);
	if (!str)
		return (0);
	va_start(argptr, str);
	ind = ft_handle_args(argptr, str);
	va_end(argptr);
	free(g_s_count);
	free(g_pre);
	free(g_flag);
	free(g_padd);
	return (ind);
}
