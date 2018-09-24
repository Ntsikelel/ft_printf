/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:55:07 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 12:52:31 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_get_min(const char *str, int *ind)
{
	int res;

	res = 0;
	while (str[*ind + 1] == ft_isdigit(str[*ind + 1]))
	{
		res = res * 10 + str[*ind + 1];
		*ind = *ind + 1;
	}
	return (res);
}
