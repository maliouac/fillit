/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charcountfile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:51:26 by maliouac          #+#    #+#             */
/*   Updated: 2016/01/28 16:51:53 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		charcountfile(char **tab)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	while (tab[i])
	{
		while (tab[i][j])
		{
			if (tab[i][j] != '.' && tab[i][j] != '\n' && tab[i][j] != ' ')
				count++;
			j++;
		}
		j = 0;
		i++;
	}
	return (count);
}
