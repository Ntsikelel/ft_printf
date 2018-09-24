/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_binary.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:22:48 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 12:55:40 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_handle_binary(va_list argptr, const char *str, int *ind)
{
	int		temp;
	char	*hold;
	size_t	len;

	ft_shift(str, ind);
	temp = va_arg(argptr, int);
	hold = ft_itoa_base(temp, 2);
	ft_putstr(hold);
	len = ft_strlen(hold);
	free(hold);
	return ((int)len);
}
