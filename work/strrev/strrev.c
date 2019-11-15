/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 22:36:54 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/11 23:51:15 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// swaps the values of char *a, and char *b
void	ft_swap(char *a, char *b)
{
	char	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
// reverses the string
char *ft_strrev(char *str)
{
	char *rev;
	char *start;
	rev = str;
	start = rev;

	while (*str)
		str++;
	str--;
	while(str >= rev)
	{
		ft_swap(str, rev);
		str--;
		rev++;
	}
	return (start);
}

int	main()
{
	char	arr[11] = "1234567890";

	char *output = ft_strrev(arr);
	printf("%s\n", output);
}
