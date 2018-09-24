/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:29:57 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/05 12:55:31 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*temp;
	size_t	counter;

	counter = 0;
	if (!s)
	{
		return (NULL);
	}
	temp = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!temp)
	{
		return (NULL);
	}
	while (s[counter] != '\0')
	{
		temp[counter] = f(counter, s[counter]);
		counter++;
	}
	temp[counter] = '\0';
	return (temp);
}
