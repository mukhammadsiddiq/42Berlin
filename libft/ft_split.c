/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:52:57 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/09 18:28:59 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	not_valid(char c, char split)
{
	return (c == split);
}

static size_t	count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (not_valid(*s, c) && *s)
			s++;
		if (*s)
		{
			words++;
			while (*s && !not_valid(*s, c))
				s++;
		}
	}
	return (words);
}

static char	*allocated(char	*s, int *i, char c)
{
	int		len;
	int		j;
	char	*str;
	int		size;

	len = 0;
	j = 0;
	str = NULL;
	while (s[*i + len] != '\0' && !not_valid(s[*i + len], c))
		len++;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	size = len;
	while (!not_valid(s[*i + j], c) && s[*i + j] && len)
	{
		str[j] = s[*i + j];
		j++;
		len --;
	}
	str[j] = '\0';
	*i += size;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	char	*str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	str = (char *) s;
	splitted = NULL;
	splitted = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!splitted)
		return (NULL);
	while (str[i])
	{
		while (str[i] && not_valid(str[i], c))
			i++;
		if (str[i])
		{
			splitted[k] = allocated(str, &i, c);
			k++;
		}
	}
	splitted[k] = '\0';
	return (splitted);
}

// int	main(void)
// {
// 	char *splt_str = "dcsdc dcsc      cdscd      cdsdc      sdc cd   ";
// 	char	c = ' ';
// 	char	**splitted = ft_split(splt_str, c);
// 	printf("count_words -> %ld\n", count_words(splt_str, c));
// 	int i = 0;
// 	while (splitted[i])
// 	{
// 		int j = 0;
// 		while (splitted[i][j])
// 		{
// 			printf("%c", splitted[i][j]);
// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// }
