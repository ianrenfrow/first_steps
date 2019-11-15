/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:45:19 by bekim             #+#    #+#             */
/*   Updated: 2019/11/13 22:52:32 by bekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HELPER_H
# define FT_HELPER_H
# define BUF_SIZE		1
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct		s_map
{
	int				lines;
	char			empty;
	char			obstacle;
	char			full;
	int				row;
	int				col;
	int				length;
	int				max_column;
	char			**grid;
}					t_map;
void				print_map(t_map *map);
int					load_map_meta_data(int fd, t_map *map);
void				load_grid(int fd, t_map *map);
t_map				*load_map(char *file_name, int mode, int *error);
int					ft_atoi(char *c);
int					is_valid_map(t_map *map);
int					is_valid_lines(t_map *map);
int					is_valid_move(t_map *map, int row_sq, int col_sq, int len);
char				*load_line_number(t_map *map, char *str);
int					is_valid_meta_data(t_map *map);
t_map				*solve_map(t_map *map);
void				fill_map(t_map *map);
void				grid_cpy(t_map map, t_map *map_cpy);
void				visualize(t_map map, int row_sq, int col_sq, int len);
#endif
