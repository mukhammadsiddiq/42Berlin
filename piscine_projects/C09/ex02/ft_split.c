/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:23:58 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/24 16:03:53 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_charset(char str, char *s)
{
	while (*s)
	{
		if (str == *s)
			return (1);
		s++;
	}
	return (0);
}

int	count_words(char *s, char *charset)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (is_charset(s[i], charset))
			i++;
		if (s[i])
		{
			word++;
			while (s[i] && !is_charset(s[i], charset))
				i++;
		}
	}
	return (word);
}

char	*allocate_space(char *c, int *i, char *charset)
{
	int		start;
	int		len;
	char	*word;
	int		j;

	start = *i;
	len = 0;
	while (c[*i + len] && !is_charset(c[*i + len], charset))
		len++;
	word = NULL;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = c[start + j];
		j++;
	}
	word[len] = '\0';
	*i += len;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int			i;
	int			k;
	char		**split;

	i = 0;
	k = 0;
	split = (char **) malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!split)
		split = NULL;
	while (str[i])
	{
		while (is_charset(str[i], charset))
			i++;
		if (str[i])
		{
			split[k] = allocate_space(str, &i, charset);
			k++;
		}
	}
	split[k] = NULL;
	return (split);
}

int	main(void)
{
	char *str = "coding school    42  located in   berlin";
	char *charset = "o";
	char **result = ft_split(str, charset);
	int i = 0;
	while (result[i])
	{
		int	j = 0;
		while (result[i][j])
		{
			write(1, &result[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
