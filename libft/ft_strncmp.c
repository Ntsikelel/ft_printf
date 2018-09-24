/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:52:50 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/15 11:32:30 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			cnt;
	unsigned char	*hlds1;
	unsigned char	*hlds2;

	if (n == 0)
	{
		return (0);
	}
	hlds1 = (unsigned char *)s1;
	hlds2 = (unsigned char *)s2;
	cnt = 0;
	while (hlds1[cnt] == hlds2[cnt] && hlds1[cnt] && hlds2[cnt] && cnt < n - 1)
	{
		cnt++;
	}
	return (hlds1[cnt] - hlds2[cnt]);
}
