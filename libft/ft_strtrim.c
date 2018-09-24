/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:13:34 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/13 14:57:46 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_start(char const *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] == 32 || s[counter] == '\n' || s[counter] == '\t')
	{
		counter++;
	}
	return (counter);
}

static size_t		ft_end(char const *s)
{
	size_t	counter;

	counter = ft_strlen(s);
	counter--;
	while (s[counter] == 32 || s[counter] == '\n' || s[counter] == '\t')
	{
		counter--;
	}
	return (counter);
}

char				*ft_strtrim(char const *s)
{
	char	*temp;
	size_t	end;
	size_t	start;
	size_t	counter;

	counter = 0;
	if (!s)
		return (NULL);
	start = ft_start(s);
	if (start == ft_strlen(s))
	{
		return ((char *)ft_strdup(""));
	}
	end = ft_end(s);
	temp = ft_strnew(end - start + 1);
	if (!temp)
		return (NULL);
	while (counter <= (end - start))
	{
		temp[counter] = s[start + counter];
		counter++;
	}
	temp[counter] = '\0';
	return (temp);
}
