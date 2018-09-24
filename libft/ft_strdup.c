/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:19:01 by nmetseem          #+#    #+#             */
/*   Updated: 2018/05/28 16:27:17 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	counter;
	size_t	len;
	char	*temp;

	counter = 0;
	len = ft_strlen(s1);
	temp = malloc((len + 1) * sizeof(char));
	if (!temp)
	{
		return (NULL);
	}
	while (counter < len)
	{
		temp[counter] = s1[counter];
		counter++;
	}
	temp[counter] = '\0';
	return (temp);
}
