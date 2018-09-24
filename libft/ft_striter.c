/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:58:56 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/13 12:04:39 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t counter;

	counter = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[counter] != '\0')
	{
		f(&s[counter++]);
	}
}
