/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:09:49 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/08 10:19:07 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t counter;
	size_t len;

	if (!s)
	{
		return ;
	}
	len = ft_strlen(s);
	counter = 0;
	while (counter < len)
	{
		s[counter++] = '\0';
	}
}
