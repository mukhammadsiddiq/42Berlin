/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhammadqodirmaxmudov <muhammadqodirmax    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:42:14 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/28 21:46:21 by muhammadqod      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *stack)
{
	int		bytesread;
	char	*buf;
	char	*tmp;

	buf = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
	bytesread = 1;
	while (bytesread > 0)
	{
		bytesread = read(fd, buf, BUFFER_SIZE);
		if (bytesread < 0)
			return (free(buf), NULL);
		if (bytesread == 0)
			break ;
		buf[BUFFER_SIZE] = '\0';
		if (!stack)
			stack = ft_strdup("");
		tmp = stack;
		printf("STACK before STRJOIN: %s\n", stack);
		stack = ft_strjoin(tmp, buf);
		printf("STACK AFTER STRJOIN: %s\n", stack);
		free(tmp);
		if (!stack)
			return (free(buf), NULL);
		if (ft_strchr(buf, '\n'))
			break;
	}
	free(buf);
	// printf("STACK SIZE: %ld\n", ft_strlen(stack));
	return (stack);
}

int	till_nextline(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	// printf("TILL_NEXT_LINE: %d\n", i);
	return (i);
}

char	*extract_line(char *stack)
{
	size_t	len;
	char	*str;

	printf("STACK DATA BEFORE EXTRACT: %s\n", stack);
	if (!stack || stack[0] == '\0')
		return (NULL);
	len = till_nextline(stack);
	str = ft_substr(stack, 0, len);
	printf("STR DATA AFTER EXTRACT: %s\n", str);
	return (str);
}

char	*stack_update(char *stack)
{
	char	*new_stack;
	size_t	len;
	size_t	stack_len;

	len = till_nextline(stack);
	printf("TILL_NEXT_LINE DURING UPDATE: %ld\n", len);
	if (!stack[len])
		return (free(stack), NULL);
	stack_len = ft_strlen(stack);
	printf("STACK LEN DURING UPDATE: %ld\n", stack_len);
	new_stack = ft_substr(stack, len, stack_len - len + 1);
	free(stack);
	return (new_stack);
}

char	*get_next_line(int fd)
{
	static char	*stack;
	char		*line;

	line = NULL;
	if (fd <= 0 || BUFFER_SIZE <= 0 || !fd)
		return (NULL);
	printf("STACK before  READFILE: %s\n", stack);
	stack = read_file(fd, stack);
	// printf("STACK DATA AFTER READ FUNCTION: \n%s\n", stack);
	line = extract_line(stack);
	printf("LINE DATA: %s", line);
	stack = stack_update(stack);
	// printf("UPDATED STACK : %s\n", stack);
	return (line);
}
