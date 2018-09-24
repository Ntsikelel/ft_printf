/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:50:03 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 14:56:31 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(int len)
{
	if (g_padd->sharp == TRUE)
	{
		if (g_pre->prec > 0)
		{
			ft_zpad(g_pre->prec - len);
		}
	}
	else if (g_pre->prec > 0)
	{
		ft_zpad(g_pre->prec - len);
	}
}
