/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:04:11 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/16 14:44:40 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			counter;
	unsigned char	*holds1;
	unsigned char	*holds2;

	counter = 0;
	holds1 = (unsigned char*)s1;
	holds2 = (unsigned char*)s2;
	while (counter < n)
	{
		if (holds1[counter] != holds2[counter])
		{
			return (holds1[counter] - holds2[counter]);
		}
		counter++;
	}
	return (0);
}
