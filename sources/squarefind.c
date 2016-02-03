/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   squarefind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:34:39 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/03 18:35:00 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

char	*squarefind(char **tab)
{
	int		n;
	char	*mapp;

	n = minsquare(tab);
	mapp = map(n);
	while (charcountmap(mapp) != charcountfile(tab))
	{
		mapp = map(n);
		mapfill(tab, mapp, n);
		if (charcountmap(mapp) == charcountfile(tab))
			return (mapp);
		n++;
	}
	return (mapp);
}
