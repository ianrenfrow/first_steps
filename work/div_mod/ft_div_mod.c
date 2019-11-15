/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:17:31 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/11 19:33:31 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int 	main()
{
	int a = 9;
	int b = 5;
	int store_mod;
	int store_div;
	int *div = &store_div;
	int *mod = &store_mod;
	printf("%d	%d	%d	%d\n", a, b, *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("%d	%d	%d	%d", a, b, *div, *mod);
}
