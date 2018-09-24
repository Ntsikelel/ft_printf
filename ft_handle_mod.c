/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_mod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:48:10 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 13:15:04 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_mod(const char *str, int *ind)
{
	ft_shift(str, ind);
	ft_addpad(1, FALSE);
	ft_putchar('%');
	return (1);
}
