/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetricheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 13:56:18 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/09 15:24:32 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char c)
{
	if (c == '#')
		return (1);
	else
		return (0);
}

int		tetricheck(char *buf)
{
	if ((check(buf[0]) && check(buf[5]) && check(buf[10]) && check(buf[15])) ||
	(check(buf[0]) && check(buf[1]) && check(buf[2]) && check(buf[3])) ||
	(check(buf[0]) && check(buf[1]) && check(buf[5]) && check(buf[6])) ||
	(check(buf[0]) && check(buf[1]) && check(buf[5]) && check(buf[10])) ||
	(check(buf[0]) && check(buf[5]) && check(buf[6]) && check(buf[10])) ||
	(check(buf[0]) && check(buf[5]) && check(buf[10]) && check(buf[11])) ||
	(check(buf[0]) && check(buf[1]) && check(buf[6]) && check(buf[11])) ||
	(check(buf[1]) && check(buf[5]) && check(buf[6]) && check(buf[11])) ||
	(check(buf[1]) && check(buf[6]) && check(buf[10]) && check(buf[11])) ||
	(check(buf[0]) && check(buf[1]) && check(buf[2]) && check(buf[5])) ||
	(check(buf[0]) && check(buf[1]) && check(buf[2]) && check(buf[6])) ||
	(check(buf[0]) && check(buf[1]) && check(buf[2]) && check(buf[7])) ||
	(check(buf[0]) && check(buf[5]) && check(buf[6]) && check(buf[7])) ||
	(check(buf[1]) && check(buf[5]) && check(buf[6]) && check(buf[7])) ||
	(check(buf[2]) && check(buf[5]) && check(buf[6]) && check(buf[7])) ||
	(check(buf[0]) && check(buf[1]) && check(buf[6]) && check(buf[7])) ||
	(check(buf[1]) && check(buf[2]) && check(buf[5]) && check(buf[6])) ||
	(check(buf[0]) && check(buf[5]) && check(buf[6]) && check(buf[11])) ||
	(check(buf[1]) && check(buf[5]) && check(buf[6]) && check(buf[10])))
		return (1);
	else
		return (0);
}
