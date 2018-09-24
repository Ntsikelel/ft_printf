/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:15:47 by nmetseem          #+#    #+#             */
/*   Updated: 2018/05/30 15:56:49 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	*holder;

	holder = (unsigned char*)s;
	counter = 0;
	while (counter++ < n)
	{
		if (*holder == (unsigned char)c)
		{
			return (holder);
		}
		holder++;
	}
	return (NULL);
}
