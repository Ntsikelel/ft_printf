/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:49:48 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/05 12:34:33 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	counter;
	size_t	lens1;
	char	*temp;

	lens1 = ft_strlen(s1);
	counter = 0;
	temp = s1;
	while (s2[counter] != '\0' && counter < n)
	{
		temp[lens1 + counter] = s2[counter];
		counter++;
	}
	temp[lens1 + counter] = '\0';
	return (s1);
}
