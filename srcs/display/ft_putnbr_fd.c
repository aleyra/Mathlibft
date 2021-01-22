/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:40:38 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/30 12:02:08 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		nb_to_tab(long *nbt, long *tab)
{
	int		i;
	int		j;
	long	d;

	i = 0;
	while (i < 10)
	{
		d = 1;
		j = 9 - i;
		while (j > 0)
		{
			d = d * 10;
			j--;
		}
		tab[i] = '0' + *nbt / d;
		*nbt = *nbt % d;
		i++;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	long	nbt;
	long	tab[10];
	int		i;

	if (n == 0)
		write(fd, "0", 1);
	else
	{
		i = 0;
		nbt = n;
		if (n < 0)
		{
			write(fd, "-", 1);
			nbt = -nbt;
		}
		nb_to_tab(&nbt, tab);
		while (tab[i] == '0')
			i++;
		while (i < 9)
		{
			write(fd, &tab[i], 1);
			i++;
		}
		write(fd, &tab[9], 1);
	}
}
