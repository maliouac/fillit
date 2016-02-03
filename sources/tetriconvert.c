/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriconvert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:19:52 by maliouac          #+#    #+#             */
/*   Updated: 2016/01/28 16:22:42 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "fillit.h"

char	*convert(char *buf)
{
	int		i;
	int		j;
	char	*baf;

	i = 0;
	j = 0;
	baf = map(4);
	while (buf[i])
	{
		while ((buf[i] == '.' || buf[i] == '\n') && j == 0)
			i++;
		if (j == 0 && buf[i] == '#' && buf[i + 4] == '#' && buf[i + 3] != '#')
			j++;
		else if (j == 0 && buf[i] == '#'
			&& buf[i + 4] == '#' && buf[i + 3] == '#')
			j = j + 2;
		else if (j == 0 && buf[i] == '#' && buf[i + 5] == '#'
			&& buf[i + 10] == '#' && buf[i + 9] == '#')
			j = j + 1;
		if (buf[i] == '#')
			baf[j] = buf[i];
		j++;
		i++;
	}
	return (baf);
}

char	**tetriconvert(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		tab[i] = convert(tab[i]);
		i++;
	}
	return (tab);
}
