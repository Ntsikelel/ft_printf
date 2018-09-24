/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:58:41 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/30 16:55:54 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	counter;
	char	*temp;

	counter = 0;
	if (!s)
	{
		return (NULL);
	}
	temp = (char *)malloc((len + 1) * sizeof(char));
	if (!temp)
	{
		return (NULL);
	}
	while (counter < len)
	{
		temp[counter] = s[start + counter];
		counter++;
	}
	temp[counter] = '\0';
	return (temp);
}
