/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 21:02:48 by bekim             #+#    #+#             */
/*   Updated: 2019/11/13 23:14:59 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_helper.h"

void		read_filename(int argc, char **argv)
{
	int			map_index;
	t_map		*map;
	int			error;
	int			map_error;

	map_index = 1;
	while (map_index < argc)
	{
		error = 0;
		map_error = 1;
		map = load_map(argv[map_index], 0, &error);
		if (!error && is_valid_map(map) && is_valid_lines(map))
			map_error = 0;
		if (!error && !map_error)
		{
			map = solve_map(map);
			print_map(map);
		}
		else
			write(1, "map error\n", 10);
		if (argc > map_index + 1)
			write(1, "\n", 1);
		map_index++;
	}
}

void		read_stinput(void)
{
	t_map		*map;
	int			error;
	int			map_error;

	error = 0;
	map_error = 1;
	map = load_map(NULL, 1, &error);
	if (!error && is_valid_map(map) && is_valid_lines(map))
	{
		map_error = 0;
	}
	if (!error && !map_error)
	{
		map = solve_map(map);
		print_map(map);
	}
	else
		write(1, "map error", 10);
}

int			main(int argc, char **argv)
{
	if (argc >= 2)
		read_filename(argc, argv);
	else
		read_stinput();
	return (0);
}
