/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:05:55 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 13:50:37 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_char(va_list argptr, const char *str, int *ind)
{
	long long temp;

	ft_shift(str, ind);
	temp = va_arg(argptr, long long);
	ft_addpad(1, FALSE);
	ft_putchar(temp);
	return (1);
}
