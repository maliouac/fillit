/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charcountmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:50:16 by maliouac          #+#    #+#             */
/*   Updated: 2016/01/28 16:50:36 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		charcountmap(char *map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i])
	{
		if (map[i] != '.' && map[i] != '\n')
			j++;
		i++;
	}
	return (j);
}
