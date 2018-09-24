/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:55:22 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/13 10:27:19 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	lendst;
	size_t	lensrc;

	counter = 0;
	while (dst[counter] != '\0' && counter < dstsize)
		counter++;
	lendst = counter;
	lensrc = ft_strlen(src);
	counter = 0;
	while (src[counter] != '\0' && lendst + counter + 1 < dstsize)
	{
		dst[lendst + counter] = src[counter];
		counter++;
	}
	if (lendst != dstsize)
		dst[lendst + counter] = '\0';
	return (lensrc + lendst);
}
