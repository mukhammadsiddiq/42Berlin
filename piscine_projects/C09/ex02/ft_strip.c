/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strip.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muxammad <muxammad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 00:31:21 by muxammad          #+#    #+#             */
/*   Updated: 2024/10/24 00:46:08 by muxammad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

static bool	is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static int	count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i])
	{
		while (is_whitespace(str[i]))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !is_whitespace(str[i]))
				i++;
		}
	}
	return (count);
}

static char	*allocate_word(char *str, int *i)
{
	int		start = *i;
	int		len = 0;
	char	*word;

	while (str[start] && !is_whitespace(str[start]))
	{
		start++;
		len++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	for (int j = 0; j < len; j++)
		word[j] = str[*i + j];
	word[len] = '\0';
	*i += len;
	return (word);
}

char	**ft_split(char *str)
{
	char	**split;
	int		words_count = count_words(str);
	int		i = 0, k = 0;

	split = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (is_whitespace(str[i]))
			i++;
		if (str[i])
		{
			split[k] = allocate_word(str, &i);
			if (!split[k])
			{
				// Free previously allocated memory
				while (k > 0)
					free(split[--k]);
				free(split);
				return (NULL);
			}
			k++;
		}
	}
	split[k] = NULL;
	return (split);
}

int main(int argc, char **argv)
{
    char	*split = "Student of 42 berlin";
    char    **result = ft_split(split);
    
    int size = 0;

    while(result[size])
        size++;
    int i = 0;
    while(result[i])
    {
        int j = 0;
        while (result[i][j])
        {
            write(1, &result[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}