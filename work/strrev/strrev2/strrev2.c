/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:12:41 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/12 11:32:15 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *num1, int *num2)
{
		int temp;

		temp = *num1;	
		*num1 = *num2;
		*num2 = temp;
}

char	*ft_strrev(char *str)
{
	char *start;
	char *end;


	while (start >= end)
	{
		ft_swap(start, end);
		start++;
		end--;
	}
}
