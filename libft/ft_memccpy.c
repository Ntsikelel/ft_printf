/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 09:49:09 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/06 10:51:41 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			counter;
	unsigned char	*holddst;
	unsigned char	*holdsrc;
	unsigned char	holdc;

	counter = 0;
	holddst = (unsigned char *)dst;
	holdsrc = (unsigned char *)src;
	holdc = (unsigned char)c;
	while (counter < n)
	{
		holddst[counter] = holdsrc[counter];
		if (holdsrc[counter] == holdc)
		{
			return (dst + counter + 1);
		}
		counter++;
	}
	return (NULL);
}
