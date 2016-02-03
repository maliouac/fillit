/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetricheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 16:23:18 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/02 11:39:38 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	aaaaa(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (charcheck(buf[i], buf[i + 5], buf[i + 10], buf[i + 1]))
			return (4);
		else if (charcheck(buf[i], buf[i + 5], buf[i + 10], buf[i + 6]))
			return (5);
		else if (charcheck(buf[i], buf[i + 5], buf[i + 10], buf[i + 11]))
			return (6);
		else if (charcheck(buf[i], buf[i + 5], buf[i + 10], buf[i - 1]))
			return (7);
		else if (charcheck(buf[i], buf[i + 5], buf[i + 10], buf[i + 4]))
			return (8);
		else if (charcheck(buf[i], buf[i + 5], buf[i + 10], buf[i + 9]))
			return (9);
		i++;
	}
	return (0);
}

static int	bbbbb(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (charcheck(buf[i], buf[i + 1], buf[i + 2], buf[i + 5]))
			return (10);
		else if (charcheck(buf[i], buf[i + 1], buf[i + 2], buf[i + 6]))
			return (11);
		else if (charcheck(buf[i], buf[i + 1], buf[i + 2], buf[i + 7]))
			return (12);
		else if (charcheck(buf[i], buf[i + 1], buf[i + 2], buf[i - 5]))
			return (13);
		else if (charcheck(buf[i], buf[i + 1], buf[i + 2], buf[i - 4]))
			return (14);
		else if (charcheck(buf[i], buf[i + 1], buf[i + 2], buf[i - 3]))
			return (15);
		i++;
	}
	return (0);
}

static int	ccccc(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (charcheck(buf[i], buf[i + 1], buf[i + 4], buf[i + 5]))
			return (16);
		else if (charcheck(buf[i], buf[i + 1], buf[i + 5], buf[i + 6]))
			return (17);
		i++;
	}
	return (0);
}

static int	ddddd(char *buf)
{
	int i;

	i = 0;
	while (buf[i])
	{
		if (charcheck(buf[i], buf[i + 5], buf[i + 6], buf[i + 11]))
			return (18);
		if (charcheck(buf[i], buf[i + 4], buf[i + 5], buf[i + 9]))
			return (19);
		i++;
	}
	return (0);
}

int			tetricheck(char *buf, int i)
{
	while (buf[i] != '\0')
	{
		if (charcheck(buf[i], buf[i + 5], buf[i + 10], buf[i + 15]))
			return (1);
		else if (charcheck(buf[i], buf[i + 1], buf[i + 2], buf[i + 3]))
			return (2);
		else if (charcheck(buf[i], buf[i + 1], buf[i + 5], buf[i + 6]))
			return (3);
		else if (buf[i] == '#' && buf[i + 5] == '#'
			&& buf[i + 10] == '#' && buf[i + 15] == '.')
			return (aaaaa(buf));
		else if (buf[i] == '#' && buf[i + 1] == '#'
			&& buf[i - 1] == '.' && buf[i + 2] == '.')
			return (ccccc(buf));
		else if (buf[i] == '#' && buf[i + 1] == '#'
			&& buf[i + 2] == '#' && buf[i + 3] == '.')
			return (bbbbb(buf));
		else if (buf[i] == '#' && buf[i + 5] == '#'
			&& buf[i + 1] == '.' && buf[i + 10] == '.')
			return (ddddd(buf));
		i++;
	}
	return (0);
}
