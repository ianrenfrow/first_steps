/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:32:38 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/11 12:54:58 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char 	c;
	int		char_index;

	c = 'a';
	char_index = 0;
	while (char_index < 26)
{
		write(1, &c, 1);
		char_index++;
		c = c + 1;
}
	return (0);
}
