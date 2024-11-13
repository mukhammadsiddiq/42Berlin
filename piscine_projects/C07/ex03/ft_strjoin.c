/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:02:48 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/21 21:55:48 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_slen(char **s, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(s[i]);
		if (i != size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strcan(char *dst, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*src;

	i = 0;
	src = NULL;
	if (size == 0)
	{
		src = malloc(sizeof(char) * 1);
		src[0] = '\0';
		return (src);
	}
	len = ft_slen(strs, sep, size);
	src = (char *) malloc(sizeof(char) * len + 1);
	if (src == NULL)
		return (NULL);
	src[0] = '\0';
	while (i < size)
	{
		ft_strcan(src, strs[i]);
		if (i != size - 1)
			ft_strcan(src, sep);
		i++;
	}
	return (src);
}

int	main(void)
{
	char *str[] = {"qwerty", "ffwefwa", "ewfewf", "afwwf", "wffewf"};
	char *sep = ", ";
	char *s;

	s = ft_strjoin(5, str, sep);
	printf("%s", s);
}
