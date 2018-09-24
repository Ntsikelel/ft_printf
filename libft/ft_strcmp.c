/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:39:21 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/15 11:32:52 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*holds1;
	unsigned char	*holds2;
	size_t			cntr;

	holds1 = (unsigned char*)s1;
	holds2 = (unsigned char*)s2;
	cntr = 0;
	while (holds1[cntr] == holds2[cntr] && holds1[cntr] && holds2[cntr])
	{
		cntr++;
	}
	return (holds1[cntr] - holds2[cntr]);
}
