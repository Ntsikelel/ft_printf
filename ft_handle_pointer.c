/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 12:29:20 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/13 13:04:03 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_pointer(va_list argptr, const char *str, int *ind)
{
	long long	temp;
	char		*hold;
	size_t		len;

	ft_shift(str, ind);
	temp = va_arg(argptr, long long);
	hold = ft_itoa_base(temp, 16);
	ft_addpad(ft_strlen(hold) + 2, FALSE);
	write(1, "0x", 2);
	ft_putstr(hold);
	len = ft_strlen(hold);
	free(hold);
	return ((int)len + 2);
}
