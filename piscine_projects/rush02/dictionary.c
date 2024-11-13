/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:25:27 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/20 23:06:08 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	process_line(char *line, DictEntry dictionary[], int *size)
{
	char	*key;
	char	*value;

	key = ft_strtok(line, ":");
	value = ft_strtok(NULL, "");
	if (key && value) 
	{
		dictionary[*size].key = ft_strdup(key);
		dictionary[*size].value = ft_strdup(value);
		return (*size)++;
	}
	return (0);
}

int	parse_dictionary(const char *filename, DictEntry dictionary[], int *size)
{
	int			fd;
	char		buf[BUFFER_SIZE];
	char		*next_line;
	char		*line;
	int			bytesread;

	fd = open(filename, O_RDONLY);
	*size = 0;
	while (1)
	{
		bytesread = read(fd, buf, sizeof(buf) - 1);
		if (bytesread <= 0 || *size >= MAX_SIZE)
			break ;
		buf[bytesread] = '\0';
		line = buf;
		while (*line)
		{
			next_line = ft_strchr(line, '\n');
			if (next_line) 
				*next_line = '\0';
			process_line(line, dictionary, size);
			line = next_line ? next_line + 1 : NULL;
		}
	}
	close(fd);
	return (0);
}

void	free_dictionary(DictEntry dictionary[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(dictionary[i].key);
		free(dictionary[i].value);
		i++;
	}
}
