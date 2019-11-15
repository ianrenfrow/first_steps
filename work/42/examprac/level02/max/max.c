/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:53:47 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/10 19:53:57 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int		i;
	int		max_value;

	if (!tab)
		return (0);
	i = 0;
	while (len--)
	{
		if (tab[i] > tab[i + 1])
			max_value = tab[i];
		i += 1;
	}
	return (max_value);
}
