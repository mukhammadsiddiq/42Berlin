/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:13:29 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/13 14:53:53 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *s);
void	ft_putchar(char s);
int		**create_grid(void);
int		*ft_atoi(char *s, int *arr);
int		solve(int **grid, int row, int col, int *clues);
void	free_grid(int **grid);
void	print_grid(int **grid);
int		*g_clues;

int	rush(char *s)
{
	int	**grid;

	g_clues = malloc(sizeof(int) * 16);
	if (!g_clues)
		return (1);
	grid = create_grid();
	if (!grid)
		return (1);
	if (!ft_atoi(s, g_clues))
	{
		free_grid(grid);
		return (1);
	}
	if (solve(grid, 0, 0, g_clues))
		print_grid(grid);
	else
	{
		ft_putstr("Error");
	}
	free(g_clues);
	free_grid(grid);
	return (0);
}

int	main(int argc, char **argv)
{
	int	result;

	if (argc != 2)
	{
		ft_putstr("Error");
		return (1);
	}
	result = rush(argv[1]);
	if (result == 1)
		ft_putstr("Error");
	return (0);
}
