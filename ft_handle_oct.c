/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_oct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 07:21:51 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/24 17:24:08 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				ft_handle_oct(va_list argptr, const char *str, int *ind)
{
	unsigned long long	utemp;
	char				*hold;
	size_t				len;

	ft_shift(str, ind);
	utemp = va_arg(argptr, unsigned long long);
	hold = ft_itoa_base(utemp, 8);
	ft_addpad(ft_strlen(hold), FALSE);
	ft_check(ft_strlen(hold));
	ft_putstr(hold);
	len = ft_strlen(hold);
	free(hold);
	return ((int)len);
}
