/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:27:41 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/14 14:10:05 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		hold;
	size_t		len;
	size_t		counter;
	const char	*temp;

	hold = (char)c;
	counter = 0;
	len = ft_strlen(s);
	temp = s;
	while (counter++ < len)
	{
		s++;
	}
	while (counter > 0)
	{
		if (hold == *s)
		{
			return ((char*)s);
		}
		s--;
		counter--;
	}
	return (NULL);
}
