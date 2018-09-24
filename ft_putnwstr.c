/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:21:42 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/11 12:42:28 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnwstr(wchar_t *str, size_t n)
{
	size_t ind;

	ind = 0;
	if (!str)
		return ;
	while (str[ind] != '\0')
		write(1, &str[ind++], sizeof(wchar_t));
	while (ind++ < n)
		ft_putchar(32);
}
