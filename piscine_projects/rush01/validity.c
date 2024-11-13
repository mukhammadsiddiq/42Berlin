/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mukibrok <mukibrok@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:19:28 by mukibrok          #+#    #+#             */
/*   Updated: 2024/10/13 15:24:28 by mukibrok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// global variable
extern int	*g_clues;

// checking numbers if it is double in a row and in a column
int	is_double(int **grid, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

// visibilitiy check for rows
int	check_row_visibility(int **grid, int row, int expected_visibility)
{
	int	visibility;
	int	max_height;
	int	i;

	visibility = 0;
	max_height = 0;
	i = 0;
	while (i < 4)
	{
		if (grid[row][i] > max_height) 
		{
			max_height = grid[row][i];
			visibility++;
		}
		i++;
	}
	return (visibility == expected_visibility);
}

// visibility check for columns
int	check_col_visibility(int **grid, int col, int expected_visibility)
{
	int	visibility; 
	int	max_height;
	int	i;

	i = 0;
	visibility = 0;
	max_height = 0;
	while (i < 4)
	{
		if (grid[i][col] > max_height) 
		{
			max_height = grid[i][col];
			visibility++;
		}
		i++;
	}
	return (visibility == expected_visibility);
}

// validation check
int	is_valid(int **grid, int row, int col, int num)
{
	if (!is_double(grid, row, col, num))
		return (0);
	grid[row][col] = num;
	if (col == 3) 
	{
		if (!check_row_visibility(grid, row, g_clues[8 + row])) 
		{
			grid[row][col] = 0;
			return (0);
		}
	}
	if (row == 3) 
	{
		if (!check_col_visibility(grid, col, g_clues[col])) 
		{
			grid[row][col] = 0;
			return (0);
		}
	}
	return (1);
}
