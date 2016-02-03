/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istetricheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:45:40 by maliouac          #+#    #+#             */
/*   Updated: 2016/01/28 16:46:26 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		istetricheck(char *map, char *tetri)
{
	int		i;
	char	c;

	i = 0;
	c = '0';
	while (tetri[i])
	{
		if (tetri[i] != '.' && tetri[i] != '\n')
			c = tetri[i];
		i++;
	}
	i = 0;
	while (map[i])
	{
		if (map[i] == c)
			return (0);
		i++;
	}
	return (1);
}
