/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:57:16 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/14 17:22:35 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	is_space(int c)
// {
// 	return ((c == 32) || (c >= 9 && c <= 13));
// }

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	char	*s;
	char	*f;
	size_t	i;

	if (*find == '\0')
		return ((char *)str);
	while (*str && len--)
	{
		s = (char *) str;
		f = (char *) find;
		i = len + 1;
		while (*s == *f && i > 0)
		{
			s++;
			f++;
			i--;
		}
		if (*f == '\0')
			return ((char *)str);
		str++;
	}
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	char	*str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 17);
// 	char	*str1 = strnstr("lorem ipsum dolor sit amet", "dolor", 17);
// 	printf("found %s\n", str);
// 	printf("found %s\n", str1);
// }