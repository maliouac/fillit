/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphaconvert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:53:08 by maliouac          #+#    #+#             */
/*   Updated: 2016/01/28 17:01:15 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**alphaconvert(char **tab)
{
	int		i;
	int		j;
	char	s;

	s = 'A';
	i = 0;
	j = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] == '#')
				tab[i][j] = s;
			j++;
		}
		j = 0;
		i++;
		s = s + 1;
	}
	return (tab);
}
