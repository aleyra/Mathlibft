/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lburnet <lburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:40:38 by lburnet           #+#    #+#             */
/*   Updated: 2020/11/27 11:29:36 by lburnet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		intlen(int n, long *i, long *m)
{
	int	size;

	size = (n < 0) ? 1 : 0;
	*m = n;
	*m *= (n < 0) ? -1 : 1;
	*i = 1;
	if (n == 0)
		size++;
	while (*i < *m)
	{
		*i *= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		size;
	long	m;
	long	i;
	int		j;

	size = intlen(n, &i, &m);
	if (!(itoa = malloc((size + 1) * sizeof(char))))
		return (NULL);
	i /= 10;
	j = 0;
	if (n < 0)
		itoa[j++] = '-';
	while (i > 1)
	{
		itoa[j++] = '0' + m / i;
		m %= i;
		i /= 10;
	}
	itoa[j] = '0' + m;
	itoa[size] = 0;
	return (itoa);
}
