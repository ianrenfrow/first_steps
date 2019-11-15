/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irenfrow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:52:41 by irenfrow          #+#    #+#             */
/*   Updated: 2019/11/10 19:52:50 by irenfrow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     iter(char *str, char c, int len)
{
    int     i;
    
    i = 0;
    while (str[i] && (i < len || len == -1))
        if (str[i++] == c)
            return (1);
    return (0);
}

int     main(int argc, char *argv[])
{
    int     i;
    
    if (argc == 3)
    {
        i = 0;
        while(argv[1][i])
        {
            if (!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
                write(1, &argv[1][i], 1);
            i += 1;
        }
    }
    write(1, "\n", 1);
    return (0);
}
