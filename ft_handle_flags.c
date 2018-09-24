/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 09:00:12 by nmetseem          #+#    #+#             */
/*   Updated: 2018/08/10 17:46:59 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_help(const char *str, int *ind)
{
	if (str[*ind + 1] == 104)
	{
		*ind = *ind + 1;
		g_flag->set = 1;
	}
	else if (str[*ind + 1] == 106)
	{
		*ind = *ind + 1;
		g_flag->set = 1;
	}
	else if (str[*ind + 1] == 122)
	{
		*ind = *ind + 1;
		g_flag->set = 1;
	}
	else if (str[*ind + 1] == 76)
	{
		*ind = *ind + 1;
		g_flag->set = 1;
	}
}

void		ft_handle_flags(const char *str, int *ind)
{
	if (str[*ind + 1] == 108 && str[*ind + 2] == 108)
	{
		*ind = *ind + 2;
		g_flag->set = 1;
	}
	else if (str[*ind + 1] == 108)
	{
		*ind = *ind + 1;
		g_flag->set = 1;
	}
	else if (str[*ind + 1] == 104 && str[*ind + 2] == 104)
	{
		*ind = *ind + 2;
		g_flag->set = 1;
	}
	ft_help(str, ind);
}
