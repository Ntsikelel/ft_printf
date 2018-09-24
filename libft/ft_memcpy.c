/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:41:12 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/06 11:04:06 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			counter;
	unsigned char	*holddst;
	unsigned char	*holdsrc;

	holdsrc = (unsigned char*)src;
	holddst = (unsigned char*)dst;
	counter = 0;
	while (counter < n)
	{
		holddst[counter] = holdsrc[counter];
		counter++;
	}
	return (dst);
}
