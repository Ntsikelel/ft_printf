/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:04:18 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/06 15:21:04 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			counter;
	unsigned char	*holddst;
	unsigned char	*holdsrc;

	holddst = (unsigned char *)dst;
	holdsrc = (unsigned char *)src;
	counter = 0;
	if (holdsrc < holddst)
	{
		while (len-- > 0)
		{
			holddst[len] = holdsrc[len];
		}
	}
	else
	{
		while (counter < len)
		{
			holddst[counter] = holdsrc[counter];
			counter++;
		}
	}
	return (dst);
}
