/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:18:51 by nmetseem          #+#    #+#             */
/*   Updated: 2018/05/31 17:21:39 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		len;
	size_t		counter;
	char		hold;

	counter = 0;
	len = ft_strlen(s);
	hold = (char)c;
	while (counter <= len)
	{
		if (hold == *s)
		{
			return ((char *)s);
		}
		s++;
		counter++;
	}
	return (NULL);
}
