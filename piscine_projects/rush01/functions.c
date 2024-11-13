/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:26:26 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/13 15:18:50 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char s);
int		is_valid(int **grid, int row, int col, int num);

int	**create_grid(void)
{
	int	**grid;
	int	i;
	int	j;

	grid = malloc(4 * sizeof(int *));
	i = 0;
	while (i < 4)
	{
		j = 0;
		grid[i] = malloc(4 * sizeof(int));
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

int	solve(int **grid, int row, int col, int *clues)
{
	int	num;

	if (row == 4)
		return (1);
	if (col == 4)
		return (solve(grid, row + 1, 0, clues));
	num = 1;
	while (num <= 4)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, row, col + 1, clues))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

void	free_grid(int **grid)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

void	print_grid(int **grid)
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(' ');
			ft_putchar(grid[i][j] + '0');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
