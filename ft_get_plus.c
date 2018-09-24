/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_plus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:55:01 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/08 10:35:15 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_plus(const char *str, int *ind)
{
	if (str[*ind + 1] == 43)
	{
		*ind = *ind + 1;
		g_s_count->count++;
		ft_putchar(43);
	}
}
