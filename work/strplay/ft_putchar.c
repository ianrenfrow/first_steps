/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 20:01:45 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/11 20:38:40 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int	length = 0;

	while(*str != '\0')
	{
		length++;	
		str++;
	}
	return (length);
}

#include <stdio.h>
int		main()
{
	char *message;

	message = "my message";
	ft_putstr(message);
	printf("%d\n", ft_strlen(message));
}

/*
 * ft_putstr takes a string as input
 * and prints the string
 */
