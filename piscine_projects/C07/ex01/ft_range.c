/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:19:36 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/21 22:03:37 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int	main(int argc, char **argv)
{
	int	*array;
	int	size;
	
	size = atoi(argv[2]) - atoi(argv[1]);
	array = ft_range(atoi(argv[1]), atoi(argv[2]));
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	free(array);
}
