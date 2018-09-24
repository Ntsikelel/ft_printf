/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:40:50 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/15 09:38:23 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_push(char const *s, char c)
{
	size_t ind;

	ind = 0;
	while (s[ind] != c && s[ind] != '\0')
	{
		ind++;
	}
	return (ind);
}

static size_t		ft_word(char const *s, char c)
{
	size_t	strc;
	size_t	ind;

	strc = 0;
	ind = 0;
	while (s[ind] != '\0')
	{
		if (s[ind] == c || s[ind] == 32 || (s[ind] >= 9 && s[ind] <= 13))
		{
			while (s[ind] == c || s[ind] == 32 || (s[ind] >= 9 && s[ind] <= 13))
			{
				ind++;
			}
		}
		if (s[ind] != '\0')
		{
			strc++;
			while (s[ind] != c && s[ind] != '\0')
			{
				ind++;
			}
		}
	}
	return (strc);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**temp;
	size_t	counter;
	size_t	ind;

	ind = 0;
	counter = 0;
	if (!s)
		return (NULL);
	temp = (char **)malloc(((ft_word(&s[ind], c) + 1) * sizeof(char *)));
	if (!temp)
		return (NULL);
	while (s[ind] != '\0')
	{
		if (s[ind] != '\0' && s[ind] != c)
		{
			temp[counter++] = ft_strsub(s, ind, ft_push(&s[ind], c));
			ind += ft_push(&s[ind], c);
		}
		while (s[ind] != '\0' && s[ind] == c)
			ind++;
	}
	temp[counter] = NULL;
	return (temp);
}
