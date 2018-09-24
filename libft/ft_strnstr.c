/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:03:44 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/05 12:39:57 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t chay;
	size_t cneed;

	chay = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[chay] != '\0' && chay < len)
	{
		cneed = 0;
		while (haystack[chay + cneed] == needle[cneed] && chay + cneed < len)
		{
			if (needle[cneed + 1] == '\0')
			{
				return ((char *)haystack + chay);
			}
			cneed++;
		}
		chay++;
	}
	return (NULL);
}
