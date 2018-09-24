/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:12:15 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/16 14:49:05 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_digit_size(long long n)
{
	int counter;

	counter = 1;
	while (n /= 10)
	{
		counter++;
	}
	return (counter);
}
