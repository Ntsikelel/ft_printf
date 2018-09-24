/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:16:27 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/30 14:27:00 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char*)malloc((size + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, size);
	str[size] = '\0';
	return (str);
}
