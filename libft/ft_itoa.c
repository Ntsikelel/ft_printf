/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:30:33 by nmetseem          #+#    #+#             */
/*   Updated: 2018/07/10 12:26:59 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n)
{
	size_t	size;

	size = 1;
	while (n /= 10)
	{
		size++;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char			*temp;
	size_t			counter;
	size_t			size;
	unsigned int	sign;

	counter = 0;
	size = 0;
	sign = n;
	if (n < 0)
	{
		sign = n * (-1);
		counter++;
	}
	size = ft_size(sign) + counter;
	temp = ft_strnew(size);
	if (!temp)
		return (NULL);
	counter = size;
	counter--;
	temp[counter--] = (sign % 10) + 48;
	while (sign /= 10)
		temp[counter--] = (sign % 10) + 48;
	if (n < 0)
		temp[0] = 45;
	return (temp);
}
