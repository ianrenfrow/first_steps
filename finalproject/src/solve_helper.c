/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 01:40:12 by bekim             #+#    #+#             */
/*   Updated: 2019/11/13 22:50:50 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

void	fill_map(t_map *map)
{
	int		row_index;
	int		col_index;
	int		max_row;
	int		max_col;

	row_index = map->row;
	col_index = map->col;
	max_row = map->row + map->length;
	max_col = map->col + map->length;
	while (row_index < max_row)
	{
		col_index = map->col;
		while (col_index < max_col)
		{
			map->grid[row_index][col_index] = map->full;
			col_index++;
		}
		row_index++;
	}
}

int		is_valid_move(t_map *map, int row_sq, int col_sq, int len)
{
	int		row_index;
	int		col_index;

	row_index = row_sq;
	col_index = col_sq;
	while (row_index < row_sq + len)
	{
		col_index = col_sq;
		while (col_index < col_sq + len)
		{
			if (map->grid[row_index][col_index] == map->obstacle)
				return (0);
			col_index++;
		}
		row_index++;
	}
	return (1);
}

t_map	*solve_map(t_map *map)
{
	int row;
	int col;
	int length;

	row = -1;
	while (++row < map->lines)
	{
		col = 0;
		while (map->grid[row][col] && (col + map->length < map->max_column)
				&& (row + map->length < map->lines))
		{
			length = map->length + 1;
			while (col + length - 1 < map->max_column && row + length - 1 <
					map->lines && is_valid_move(map, row, col, length))
			{
				map->length = length;
				map->row = row;
				map->col = col;
				length++;
			}
			col++;
		}
	}
	fill_map(map);
	return (map);
}
