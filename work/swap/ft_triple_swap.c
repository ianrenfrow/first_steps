/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:22:09 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/11 18:24:30 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


void	ft_triple_swap(int *num1, int *num2, int *num3)
{
	ft_swap(num3, num1);
	ft_swap(num3, num2);

}

#include <stdio.h>
int		main()
{
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;

	// we have 1, 2, 3
	// after trple swap, I want 
	// 3, 1, 2
	printf("%d	%d	%d\n", num1, num2, num3);
	ft_triple_swap(&num1, &num2, &num3);
	printf("%d	%d	%d\n", num1, num2, num3);
	ft_triple_swap(&num1, &num2, &num3);
	printf("%d	%d	%d\n", num1, num2, num3);
	ft_triple_swap(&num1, &num2, &num3);
	printf("%d	%d	%d\n", num1, num2, num3);
}
