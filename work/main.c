/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 01:52:29 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/11 18:50:49 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_alphabet(int total_print)
{
	char	c;
	int		char_index;
	int		print_count;
	
	c = 'a';
	char_index = 0;
	while (char_index < 26)
	{
		print_count = -1;	
		while(print_count < total_print)
		{
			write(1, &c, 1);	
			print_count++;
		}
		c = c + 1;
		char_index++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	print_alphabet(3);
	return (0);	
}
