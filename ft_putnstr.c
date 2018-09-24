/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:59:28 by nmetseem          #+#    #+#             */
/*   Updated: 2018/07/31 16:41:40 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnstr(const char *str, size_t n)
{
	size_t ind;

	ind = 0;
	if (!str)
		return ;
	while (str[ind] != '\0' && ind < n)
		ft_putchar(str[ind++]);
	while (ind++ < n)
		ft_putchar(32);
}
