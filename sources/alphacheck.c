/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphacheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 11:08:32 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/02 11:54:00 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	firstcheck(char *buf)
{
	if (isal(buf[10]) && isal(buf[15]))
		return (1);
	else if (isal(buf[10]) && isal(buf[6]))
		return (5);
	else if (isal(buf[10]) && isal(buf[11]))
		return (6);
	else if (isal(buf[6]) && isal(buf[7]))
		return (14);
	else if (isal(buf[6]) && isal(buf[11]))
		return (16);
	else
		return (-1);
}

static int	secondcheck(char *buf)
{
	if (isal(buf[2]) && isal(buf[3]))
		return (2);
	else if (isal(buf[6]) && isal(buf[11]))
		return (7);
	else if (isal(buf[2]) && isal(buf[6]))
		return (11);
	else if (isal(buf[2]) && isal(buf[7]))
		return (12);
	else if (isal(buf[6]) && isal(buf[7]))
		return (18);
	else
		return (-1);
}

static int	thirdcheck(char *buf)
{
	if (isal(buf[11]))
		return (8);
	else if (isal(buf[7]))
		return (13);
	else if (isal(buf[10]))
		return (17);
	else if (isal(buf[2]))
		return (19);
	else
		return (-1);
}

int			ach(char *buf)
{
	if (isal(buf[0]) && isal(buf[1]) && isal(buf[5]) && isal(buf[6]))
		return (3);
	else if (isal(buf[0]) && isal(buf[5]) && isal(buf[10]) && isal(buf[1]))
		return (4);
	else if (isal(buf[0]) && isal(buf[1]) && isal(buf[2]) && isal(buf[5]))
		return (10);
	else if (isal(buf[0]) && isal(buf[5]))
		return (firstcheck(buf));
	else if (isal(buf[0]) && isal(buf[1]))
		return (secondcheck(buf));
	else if (isal(buf[1]) && isal(buf[5]) && isal(buf[6]))
		return (thirdcheck(buf));
	else if (isal(buf[1]) && isal(buf[6]) && isal(buf[10]) && isal(buf[11]))
		return (9);
	else if (isal(buf[2]) && isal(buf[5]) && isal(buf[6]) && isal(buf[7]))
		return (15);
	else
		return (-1);
}
