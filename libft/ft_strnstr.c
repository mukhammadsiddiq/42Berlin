/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:57:16 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/12 19:39:14 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(int c)
{
	return ((c == 32) || (c >= 9 && c <= 13));
}

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	unsigned char	*s;
	unsigned char	*f;

	if (*find == '\0')
		return ((char *)str);
	while (*str && len--)
	{
		s = (unsigned char *) str;
		f = (unsigned char *) find;
		while (*s == *f)
		{
			s++;
			f++;
		}
		if (*f == '\0' && is_space(*s))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
