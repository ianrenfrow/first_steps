/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_helper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 23:45:20 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/13 23:17:09 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

void		print_map(t_map *map)
{
	int			length;
	char		**grid;
	int			row_index;
	int			col_index;

	length = map->lines;
	row_index = 0;
	col_index = 0;
	grid = map->grid;
	while (row_index < length)
	{
		col_index = 0;
		while (grid[row_index][col_index] != '\0')
		{
			write(1, &grid[row_index][col_index], 1);
			col_index++;
		}
		write(1, "\n", 1);
		row_index++;
	}
}

int			load_map_meta_data(int fd, t_map *map)
{
	char			buf[2];
	char			*first_line;
	int				index;
	int				total;

	total = 0;
	index = 0;
	first_line = (char*)malloc(sizeof(char) * 1000000);
	while ((read(fd, buf, 1)) && *buf != '\n')
	{
		first_line[index] = buf[0];
		index++;
	}
	first_line[index] = '\0';
	first_line = load_line_number(map, first_line);
	map->empty = *first_line++;
	map->obstacle = *first_line++;
	map->full = *first_line++;
	return (is_valid_meta_data(map) && !(*first_line));
}

void		load_grid(int fd, t_map *map)
{
	int		row_index;
	int		col_index;
	int		ret;
	char	buf[1];

	row_index = 0;
	map->grid = (char**)malloc(sizeof(char*) * map->lines);
	while (row_index < map->lines)
	{
		col_index = 0;
		map->grid[row_index] = (char*)malloc(sizeof(char) * 1000000);
		while ((ret = read(fd, buf, BUF_SIZE)) && *buf != '\n')
		{
			map->grid[row_index][col_index] = *buf;
			col_index++;
			map->max_column = col_index;
		}
		row_index++;
	}
	map->row = 0;
	map->col = 0;
	map->length = 0;
}

t_map		*load_map(char *file_name, int mode, int *error)
{
	int				fd;
	int				map_error;
	int				valid_map;
	t_map			*map;

	map_error = 0;
	valid_map = 0;
	map = (t_map*)malloc(sizeof(t_map));
	if (mode == 0)
		fd = open(file_name, O_RDONLY, 0);
	else
		fd = STDIN_FILENO;
	if (fd == -1)
		map_error = 1;
	else
	{
		valid_map = load_map_meta_data(fd, map);
		if (valid_map == 1)
			load_grid(fd, map);
		else
			map_error = 1;
	}
	close(fd);
	*error = map_error;
	return (map);
}
