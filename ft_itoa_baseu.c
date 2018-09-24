/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_baseu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:46:24 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/15 16:22:56 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_size(unsigned long long n, int base)
{
	size_t size;

	size = 1;
	while (n /= base)
	{
		size++;
	}
	return (size);
}

char			*ft_itoa_baseu(unsigned long long n, int base)
{
	char				*res;
	size_t				counter;
	unsigned long long	sign;

	counter = 0;
	sign = n;
	counter = ft_size(sign, base);
	res = ft_strnew(counter + 1);
	if (!res)
		return (NULL);
	counter--;
	if (sign % base < 10)
		res[counter--] = sign % base + 48;
	else
		res[counter--] = ft_tolower(sign % base + 55);
	while (sign /= base)
	{
		if (sign % base < 10)
			res[counter--] = ft_tolower(sign % base + 48);
		else
			res[counter--] = ft_tolower(sign % base + 55);
	}
	return (res);
}
