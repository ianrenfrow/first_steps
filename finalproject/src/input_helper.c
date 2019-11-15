/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:07:07 by bekim             #+#    #+#             */
/*   Updated: 2019/11/13 19:18:26 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

char		*load_line_number(t_map *map, char *str)
{
	int total;

	total = 0;
	while (*str >= '0' && *str <= '9')
	{
		total = total * 10 + (*str - '0');
		str++;
	}
	map->lines = total;
	return (str);
}

int			is_valid_meta_data(t_map *map)
{
	char	empty;
	char	obstacle;
	char	full;
	int		lines;

	empty = map->empty;
	obstacle = map->obstacle;
	full = map->full;
	lines = map->lines;
	if (lines < 1)
		return (0);
	if (empty == obstacle || empty == full || obstacle == full)
		return (0);
	return (1);
}
