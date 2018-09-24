/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:01:46 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/05 12:33:39 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*temp;
	size_t	counter;
	size_t	lens1;

	lens1 = ft_strlen(s1);
	counter = 0;
	temp = s1;
	while (s2[counter] != '\0')
	{
		temp[lens1 + counter] = s2[counter];
		counter++;
	}
	temp[counter + lens1] = '\0';
	return (s1);
}
