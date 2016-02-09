/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 13:33:29 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/09 16:52:55 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*mapp;
	char	**tab;
	int		i;

	i = 0;
	if (argc != 2 || open(argv[1], O_RDONLY) == -1)
	{
		ft_putstr("error\n");
		return (0);
	}
	tab = tetritab(argv[1]);
	if (entrycheck(tab) == 0 || filecheck(argv[1]) == 0 || tabcount(tab) > 26)
	{
		ft_putstr("error\n");
		return (0);
	}
	else
	{
		tab = alphaconvert(tetriconvert(tab));
		mapp = squarefind(tab);
		ft_putstr(mapp);
	}
	return (0);
}
