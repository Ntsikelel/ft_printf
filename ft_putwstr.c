/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:08:25 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/11 12:53:52 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putwstr(wchar_t *str)
{
	size_t ind;

	ind = 0;
	if (!str)
		return ;
	while (str[ind] != '\0')
		write(1, &str[ind++], 1);
}
