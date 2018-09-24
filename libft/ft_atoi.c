/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:23:55 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/15 09:05:31 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_push(const char *src)
{
	size_t counter;

	counter = 0;
	while (src[counter] == 32 || (src[counter] >= 9 && src[counter] <= 13))
	{
		counter++;
	}
	return (counter);
}

int				ft_atoi(const char *str)
{
	long	total;
	int		sign;
	int		counter;

	counter = 0;
	total = 0;
	sign = 1;
	counter = ft_push(str);
	if (str[counter] == 45)
		sign = -1;
	if (str[counter] == 45 || str[counter] == 43)
		counter++;
	while (str[counter] != '\0' && str[counter] >= 48 && str[counter] <= 57)
	{
		total = (total * 10) + str[counter++] - 48;
	}
	if (total < 0 && sign == -1)
		return (0);
	if (total < 0 && sign == 1)
		return (-1);
	return (total * sign);
}
