/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:11:34 by maliouac          #+#    #+#             */
/*   Updated: 2016/01/28 16:12:43 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*map(int n)
{
	int		i;
	char	*map;
	int		size;

	i = 0;
	size = n * n + n;
	map = (char *)malloc(size + 1);
	if (!map)
		return (NULL);
	while (i < size)
	{
		if (i % (n + 1) == n)
			map[i] = '\n';
		else
			map[i] = '.';
		i++;
	}
	map[i] = '\0';
	return (map);
}
