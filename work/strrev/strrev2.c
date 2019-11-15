/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:12:41 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/12 12:15:33 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char *num1, char *num2)
{
		char temp;

		temp = *num1;	
		*num1 = *num2;
		*num2 = temp;
}

char	*ft_strrev(char *str)
{
	char *start;
	char *end;

	end = str;
	start = str;

	while (*end != '\0')
	{
		end++;
	}
	end--;	

	while (end >= start)
	{
		ft_swap(start, end);
		start++;
		end--;
	}
	return (str);
}

#include <stdio.h>
int		main()
{
	char str[] = "123456";
	printf("%s\n", ft_strrev(str));
}
