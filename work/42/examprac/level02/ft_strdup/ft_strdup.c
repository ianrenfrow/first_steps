/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:51:52 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/10 19:52:04 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i += 1;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	i = -1;
	if (!src || !(cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[++i])
		cpy[i] = src[i];
	cpy[i] = '\0';
	return (cpy);
}
