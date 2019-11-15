/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:43:17 by irenfrow          #+#    #+#             */
/*   Updated: 2019/10/28 00:49:37 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == 1 && j == x))
				ft_putchar('A');
			else if ((i == y && j == 1) || (i == y && j == x))
				ft_putchar('C');
			else if (i == 1 || j == 1 || i == y || j == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j = j + 1;
		}
		ft_putchar('\n');
		j = 1;
		i = i + 1;
	}
}

int	main(void)
{
	rush(5, 5);
	return (0);
}
