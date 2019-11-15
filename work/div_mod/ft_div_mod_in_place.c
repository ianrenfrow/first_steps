/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:17:31 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/11 19:58:56 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
 * write a function that takes the integer pointers div and mod
 * then assigns the result of division to the value of *div
 * then assigns the result of modulus to the value of *mod
*/

void	ft_div_mod(int *div, int *mod)
{
	int	temp;
	temp = *div;
	*div = *div / *mod;
	*mod = temp % *mod;
}

int 	main()
{
	int store_div = 9;
	int store_mod = 5;
	int *div = &store_div;
	int *mod = &store_mod;
	printf("%d	%d\n", *div, *mod);
	ft_div_mod(div, mod);
	printf("%d	%d", *div, *mod);
}
