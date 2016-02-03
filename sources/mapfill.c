/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapfill.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:37:51 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/03 18:17:22 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "fillit.h"

int		mapfill(char **tab, char *mapp, int n)
{
	int		j;
	char	*pmap;

	j = 0;
	if (tab[0] == NULL)
		return (1);
	while (mapp[j])
	{
		if ((pmap = mapcheck(tab[0], mapp, mapp + j, n))
			&& istetricheck(mapp + j, tab[0]))
		{
			fill(tab[0], pmap, n);
			if (mapfill(tab + 1, mapp, n))
				return (1);
			else
				erase_last(mapp, tab[0]);
		}
		j++;
	}
	return (0);
}
