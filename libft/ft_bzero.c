/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:17:17 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/15 08:32:50 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		counter;
	char		*holder;

	counter = 0;
	holder = (char*)s;
	while (counter < n)
	{
		holder[counter++] = 0;
	}
}
