/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetricount.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:17:57 by maliouac          #+#    #+#             */
/*   Updated: 2016/01/28 16:18:53 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetricount(char *path)
{
	int		fd;
	int		ret;
	int		i;
	char	*buf;

	buf = malloc(26);
	i = 0;
	fd = open(path, O_RDONLY);
	while ((ret = read(fd, buf, 20)))
	{
		buf[ret] = '\0';
		read(fd, buf, 1);
		i++;
	}
	close(fd);
	return (i);
}
