/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:10:34 by nmetseem          #+#    #+#             */
/*   Updated: 2018/05/31 10:06:55 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			counter;
	unsigned char	*holder;

	holder = (unsigned char *)b;
	counter = 0;
	while (counter < len)
	{
		holder[counter++] = (unsigned char)c;
	}
	return (b);
}
