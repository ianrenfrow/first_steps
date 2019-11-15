/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:55:21 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/10 19:55:31 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int		i;
	char	str_union[256 + 128] = {0};

	i = 0;
	while (str1[i])
	{
		if (!str_union[+str1[i]])
		{
			str_union[+str1[i]] = 1;
			write (1, &str1[i], 1);
		}
		i += 1;
	}
	i = 0;
	while (str2[i])
	{
		if (!str_union[+str2[i]])
		{
			str_union[+str2[i]] = 1;
			write (1, &str2[i], 1);
		}
		i += 1;
	}
}

int		main (int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
