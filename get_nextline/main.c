/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:51:00 by mukibrok          #+#    #+#             */
/*   Updated: 2024/11/28 18:11:25 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int		fd;
	char	*str;

	fd = open("text.txt", O_RDONLY);
	printf("FD: %d\n", fd);
	str = get_next_line(fd);
	// printf("main: %s", str);
	while (str)
	{
		printf("%s", str);
		str = get_next_line(fd);
	}
}
