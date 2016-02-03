/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 13:45:20 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/03 18:07:04 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		fill(char *buf, char *map, int n)
{
	int i;
	int j;
	int mod;

	j = 0;
	i = 0;
	mod = 0;
	if (map == 0)
		return (0);
	while (buf[i])
	{
		if (buf[i] != '.' && buf[i] != '\n')
		{
			if (buf[0] == '.')
				mod = (i % 5) - 1;
			else
				mod = i % 5;
			j = (i / 5 * (n + 1));
			if (map[j + mod] == '.')
				map[j + mod] = buf[i];
		}
		i++;
	}
	return (1);
}
