/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entrycheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:49:16 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/09 16:56:24 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		linecheck(char *tetri)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tetri[i] != '\0')
	{
		if (tetri[i] != '\n')
			count++;
		i++;
	}
	i = 0;
	while (tetri[i] != '\0')
	{
		if (i % 5 == 4 && tetri[i] != '\n')
		{
			return (-1);
		}
		i++;
	}
	if (count == 16)
		return (1);
	else
		return (-1);
}

int charcount(char *tetri)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tetri[i])
	{
		if (tetri[i] == '#')
			count++;
		i++;
	}
	if (count == 4)
		return (1);
	else
		return (0);
}

int		entrycheck(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (tetricheck(tab[i]) == 0 || linecheck(tab[i]) == -1
		|| charcount(tab[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
