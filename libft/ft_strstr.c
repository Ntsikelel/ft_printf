/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:22:26 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/05 12:38:13 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	cneed;
	size_t	chay;

	chay = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[chay] != '\0')
	{
		cneed = 0;
		while (haystack[chay + cneed] == needle[cneed])
		{
			if (needle[cneed + 1] == '\0')
				return ((char *)haystack + chay);
			cneed++;
		}
		chay++;
	}
	return (NULL);
}
