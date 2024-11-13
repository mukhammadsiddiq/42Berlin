/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:33:58 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/20 22:55:55 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

# define MAX_SIZE 256
# define BUFFER_SIZE 1024

typedef struct DictEntry
{
	char	*key;
	char	*value;
}DictEntry;

void	ft_putstr(char *str);
int		ft_strlen(char *s);
int		ft_strcmp(char *s1, char *s2);
void	print_error(int type);
void	ft_putstr1(char *s);
int		check_validity(char *s, char **num);
int		parse_dictionary(const char *filename,
			DictEntry dictionary[], int *size);
void	free_dictionary(DictEntry dictionary[], int size);
void	convert_to_words(char *num, DictEntry dictionary[], int size);
char	*ft_strtok(char *str, char *delim);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		process_line(char *line, DictEntry dictionary[], int *size);
int		parse_dictionary(const char *filename,
			DictEntry dictionary[], int *size);
char	*ft_strchr(char *delim, char c);

#endif
