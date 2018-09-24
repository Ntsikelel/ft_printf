/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 17:06:33 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/13 12:05:07 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t counter;

	counter = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[counter] != '\0')
	{
		f(counter, &s[counter]);
		counter++;
	}
}
