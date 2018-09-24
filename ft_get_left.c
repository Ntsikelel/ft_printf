/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_left.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:51:11 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 14:38:03 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_left(const char *str, int *ind)
{
	if (str[*ind + 1] == 45)
	{
		*ind = *ind + 1;
		g_padd->left = TRUE;
	}
}
