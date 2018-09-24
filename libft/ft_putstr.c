/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:49:01 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/15 09:04:29 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	counter;
	size_t	size;

	if (!s)
	{
		return ;
	}
	size = ft_strlen(s);
	counter = 0;
	while (counter < size)
	{
		write(1, &(s[counter]), 1);
		counter++;
	}
}
