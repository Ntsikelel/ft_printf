/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hash.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:25:55 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 14:21:16 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_hash(const char *str, int *ind)
{
	if (str[*ind + 1] == 35)
	{
		*ind = *ind + 1;
		g_padd->sharp = TRUE;
	}
}