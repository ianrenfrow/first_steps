/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:35:44 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/13 22:51:53 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

int		is_valid_map(t_map *map)
{
	int row_index;
	int col_index;

	row_index = 0;
	col_index = 0;
	while (row_index < map->lines)
	{
		col_index = 0;
		while (col_index < map->max_column)
		{
			if (map->grid[row_index][col_index] != map->empty &&
					map->grid[row_index][col_index] != map->obstacle &&
					map->grid[row_index][col_index] != map->full)
			{
				return (0);
			}
			col_index++;
		}
		row_index++;
	}
	return (1);
}

int		is_valid_lines(t_map *map)
{
	int row_index;
	int col_index;

	row_index = 0;
	col_index = 0;
	if (map->max_column < 1 || map->lines < 1)
		return (0);
	while (row_index < map->lines)
	{
		col_index = 0;
		while (map->grid[row_index][col_index] != '\0')
		{
			if (col_index >= map->max_column)
			{
				return (0);
			}
			col_index++;
		}
		row_index++;
	}
	return (1);
}
