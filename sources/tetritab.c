/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetritab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:15:52 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/03 18:46:17 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "fillit.h"
#include <unistd.h>

int		filecheck(char *path)
{
	int		i;
	int		x;
	int		fd;
	int		ret;
	char	*buf;

	i = 0;
	if (!(buf = (char *)malloc(270 * 20)))
		return (0);
	fd = open(path, O_RDONLY);
	ret = read(fd, buf, 269 * 20);
	buf[ret] = '\0';
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n' && buf[i + 1] == '\n' && buf[i + 2] == '\0')
			return (0);
		i++;
	}
	close(fd);
	if (buf[ret - 1] != '\n')
		x = 0;
	else
		x = 1;
	free(buf);
	return (x);
}

char	**tetritab(char *path)
{
	int		fd;
	int		ret;
	char	*buf;
	int		i;
	char	**tab;

	i = 0;
	if (!(buf = (char*)malloc(21)))
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (tetricount(path) + 1))))
		return (NULL);
	fd = open(path, O_RDONLY);
	while ((ret = read(fd, buf, 20)))
	{
		buf[ret] = '\0';
		tab[i] = buf;
		if (!(buf = (char *)malloc(21)))
			return (NULL);
		read(fd, buf, 1);
		i++;
	}
	tab[i] = NULL;
	close(fd);
	return (tab);
}
