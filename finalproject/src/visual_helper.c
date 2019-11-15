/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visual_helper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:43:52 by bekim             #+#    #+#             */
/*   Updated: 2019/11/15 01:59:44 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

void	grid_cpy(t_map map, t_map *map_cpy)
{
	int		row;
	int		col;
	int		index_row;
	int		index_col;
	char	**arr;

	row = map.lines;
	col = map.max_column;
	arr = (char**)malloc(sizeof(char*) * row);
	index_row = 0;
	index_col = 0;
	while (index_row < row)
	{
		index_col = 0;
		arr[index_row] = (char*)malloc(sizeof(char) * col);
		while (index_col < col)
		{
			arr[index_row][index_col] = map.grid[index_row][index_col];
			index_col++;
		}
		index_row++;
	}
	map_cpy->grid = arr;
}

void	visualize(t_map map, int row_sq, int col_sq, int len)
{
	t_map	map_cpy;

	map_cpy = map;
	grid_cpy(map, &map_cpy);
	map_cpy.row = row_sq;
	map_cpy.col = col_sq;
	map_cpy.length = len;
	fill_map(&map_cpy);
	print_map(&map_cpy);
	usleep(50000);
	system("clear");
}
