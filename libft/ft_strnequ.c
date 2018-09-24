/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 09:52:44 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/14 14:35:33 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	if (!s1 || !s2)
	{
		return (0);
	}
	if (n == 0)
		return (1);
	if (ft_strlen(s1) != ft_strlen(s2))
	{
		return (0);
	}
	while (counter < n)
	{
		if (s1[counter] != s2[counter])
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
