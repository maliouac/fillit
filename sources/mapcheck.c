/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 15:05:19 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/03 18:17:40 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		countmap(char *map)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (map[i])
	{
		if (isal(map[i]))
			count++;
		i++;
	}
	return (count);
}

static int		addcount(char *map)
{
	int count;

	count = countmap(map);
	return (count + 4);
}

char			*mapcheck(char *tetri, char *mapstart, char *map, int n)
{
	int i;
	int cmp;

	i = 0;
	cmp = addcount(mapstart);
	while (map[i] != '\0')
	{
		fill(tetri, map + i, n);
		if (cmp == countmap(mapstart))
		{
			erase_last(mapstart, tetri);
			return (map + i);
		}
		else
			erase_last(mapstart, tetri);
		i++;
	}
	return (NULL);
}
