/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:27:02 by nmetseem          #+#    #+#             */
/*   Updated: 2018/09/24 17:17:32 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_size(long long n, int base)
{
	size_t size;

	size = 1;
	while (n /= base)
	{
		size++;
	}
	return (size);
}

char			*ft_itoa_base(long long n, int base)
{
	char		*res;
	size_t		counter;
	long long	sign;

	counter = 0;
	sign = (n < 0) ? -n : n;
	if (n < 0)
		counter++;
	if (!(res = ft_strnew(counter + ft_size(sign, base) + 1)))
		return (NULL);
	counter = ft_size(sign, base) - 1;
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
	(n < 0) ? res[0] = 45 : 0;
	return (res);
}

char			*ft_itoa_basealpha(long long n, int base)
{
	char		*res;
	size_t		counter;
	long long	sign;

	counter = 0;
	sign = (n < 0) ? -n : n;
	if (n < 0)
		counter++;
	counter += ft_size(sign, base);
	if (!(res = ft_strnew(counter + 1)))
		return (NULL);
	counter--;
	if (sign % base < 10)
		res[counter--] = sign % base + 48;
	else
		res[counter--] = sign % base + 55;
	while (sign /= base)
	{
		if (sign % base < 10)
			res[counter--] = sign % base + 48;
		else
			res[counter--] = sign % base + 55;
	}
	(n < 0) ? res[0] = 45 : 0;
	return (res);
}
