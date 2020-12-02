/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:40:38 by lburnet           #+#    #+#             */
/*   Updated: 2020/12/02 15:47:02 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		intlen(int n, long *m)
{
	int		size;
	long	t;

	size = (n < 0) ? 1 : 0;
	*m = n;
	*m *= (n < 0) ? -1 : 1;
	t = *m;
	if (n == 0)
		return (1);
	while (t > 0)
	{
		t = t / 10;
		size++;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	char	*itoa;
	int		size;
	long	m;
	int		j;

	size = intlen(n, &m);
	if (!(itoa = malloc((size + 1) * sizeof(char))))
		return (NULL);
	if (m == 0)
		itoa[size - 1] = '0';
	j = 1;
	if (n < 0)
		itoa[0] = '-';
	itoa[size] = 0;
	while (m > 0)
	{
		itoa[size - j] = '0' + m % 10;
		m /= 10;
		j++;
	}
	return (itoa);
}
