/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliouac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 17:51:52 by maliouac          #+#    #+#             */
/*   Updated: 2016/02/09 16:49:17 by maliouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*mapcheck(char *tetri, char *mapstart, char *map, int n);
char	**alphaconvert(char **tab);
int		tetricheck(char *buf);
int		fill(char *buf, char *map, int n);
int		ach(char *buf);
char	**tetriconvert(char **tab);
int		tetricount(char *path);
char	*map(int n);
int		charcountmap(char *map);
int		charcountfile(char **tab);
char	*squarefind(char **tab);
int		mapfill(char **tab, char *mapp, int n);
char	**tetritab(char *path);
void	erase_last(char *map, char *tetri);
int		tabsize(char **tab);
char	*redraw(char *map);
char	*permut(char **tab, int pos, int size, char *map, int n);
int		minsquare(char **tab);
int		istetricheck(char *map, char *tetri);
int		entrycheck(char **tab);
int		filecheck(char *path);
int		tabcount(char **tab);
int		isal(char c);
int		charcheck(char a, char b, char c, char d);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		charcount(char *tetri);
#endif
