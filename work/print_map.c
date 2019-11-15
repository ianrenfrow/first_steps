/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:49:52 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/12 22:48:24 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_map(char **map, int length)
{
	int row_index;
	int col_index;

	row_index = 0;
	col_index = 0;
	while (row_index < length)
	{
		col_index = 0;	
		while (map[row_index][col_index] != '\0')
		{
			write(1, &map[row_index][col_index], 1);
			col_index++;
		}	
		write(1, "\n", 1);
		row_index++;
	}
}
