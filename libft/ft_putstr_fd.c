/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:30:52 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/11 15:54:54 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	len;
	size_t	counter;

	counter = 0;
	if (!s)
	{
		return ;
	}
	len = ft_strlen(s);
	while (counter < len)
	{
		write(fd, &(s[counter]), 1);
		counter++;
	}
}
